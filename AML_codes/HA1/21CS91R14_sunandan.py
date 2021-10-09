from os import read
import math
import matplotlib.pyplot as mplt
from numpy.core.fromnumeric import reshape
from numpy.linalg import det, inv
from scipy.optimize import minimize
from scipy.linalg import inv
import pandas as pnd
import numpy as np

def kernel_func(x1, x2, type='rbf', l=1.0, sig_f=1.0, alpha=1.0, const=1.0, p=1.0):
    '''
    to generate kernels of choice for chosen sets of data between which we intend to find the co variance using this kernel
    input:
        mandatory:
            x1 = data set 1 with N1 x n dimension (N1 = no of observationa)
            x2 = data set 2 with N2 x n dimension (N2 = no of observationa)
        optionals :
            type = kernel function type, default is rbf 
                    others are quad, periodic, constant 
            l = rbf parameter , default value 1
            sig_f = rbf parameter , default value 1
    '''
    dxx = (np.sum(x1**2,1).reshape(-1,1) + np.sum(x2**2,1) - np.dot(x1,x2.T)*2).astype(np.float64)
    # print("sqdist = "+str(np.sum(x1**2,1).reshape(-1,1))+" + "+str(np.sum(x2**2,1))+" - "+str(np.dot(x1,x2.T)*2))
    K_rbf = (sig_f**2)*np.exp(-0.5/(l**2)*dxx, dtype=np.float64)
    if type == 'dot':
        K = np.dot(x1,x2.T)
    elif type=='quad':
        K = (sig_f**2)*(1+0.5/(alpha*l**2)*(np.sum(x1**2).reshape(-1,1)+np.sum(x2**2).reshape(-1,1)-np.dot(x1,x2.T)*2))**(-alpha)
        # print(-0.5/(l**2)*(np.sum(x1**2).reshape(-1,1)+np.sum(x2**2).reshape(-1,1)-2*np.dot(x1,x2.T)))
    elif type=='const':
        K = const
    elif type == 'periodic':
        K  = sig_f**2*np.exp(-2/l**2*math.sin(math.pi/p*(np.sum(x1**2,1).reshape(-1,1)+np.sum(x2**2,1).reshape(-1,1)+np.dot(x1,x2.T)*2))**2) 
    elif type == 'rbf':
        K = K_rbf
        # print(-0.5/(l**2)*(np.sum(x1**2).reshape(-1,1)+np.sum(x2**2).reshape(-1,1)-2*np.dot(x1,x2.T)))
    else:
        K = K_rbf
    # print(type+" kernel size = "+str(K.shape))
    return K

def mleopt(x_train, y_train, noise_var, init=[1,1], kerneltype='rbf'):
    '''
    to optimize the kernel parameters my maximizing the likelihood of training data
    input:
        mandatory:
            x_train = x avlues of training data set with N x nx dimension (N = no of observationa)
            y_train = y avlues of training data set with N x ny dimension (N = no of observationa)
            noise_var = noise deviation

        optionals :
            init = initialisation of parameter search, default [1,1] i.e. sig_f = 1, l = 1  
            kerneltype = type of kernel we are optimizing parmeters for, efault 'rbf'
    '''
    def nll(params):
        K = kernel_func(x_train, x_train, sig_f = params[0], l = params[1], type=kerneltype) + noise_var**2 * np.eye(x_train.shape[0])
        ll = -0.5 * np.log(det(K)) - 0.5 * np.dot(np.dot(y_train.T[0], np.linalg.inv(K)), y_train.T[0].T) - 0.5 * x_train.shape[0] * np.log(2 * np.pi)
        print(np.linalg.det(K))
        # for more than one prediction data
        if y_train.shape[0] > 1:
            ll_joint = np.zeros(ll.shape)
            for i in range(y_train.shape[1]):
                ll_joint += - 0.5 * np.log(det(K)) - 0.5 * np.dot(np.dot(y_train.T[i], np.linalg.inv(K)), y_train.T[i].T) - 0.5 * x_train.shape[0] * np.log(2 * np.pi)
            ll = ll_joint
        
        return  -ll
    
    param_bounds = ((1e-8, 1e+5),(1e-10, 1e+5))
    
    theta_mle = minimize(nll, x0 = init, bounds = param_bounds, method = 'L-BFGS-B')

    return theta_mle.x

def main():

    test_days = 300
    
    # kernel params init
    l = 51.34676895367992#1
    sigma_f = 184.44057888035516#1
    noise_var = np.sqrt(0.1)
    kerneltype = 'rbf'

    # training data
    data = pnd.read_excel('vaccination.xlsx').astype('int64')
    # print(data)
    headers = data.columns.values.reshape(1,-1)
    x_days = data.Day_Number.values.reshape(1,-1)
    x_train = x_days
    y_daily = data.daily_vaccinations.values.reshape(1,-1)
    y_total = data.total_vaccinations.values.reshape(1,-1)
    y_train = np.stack([y_daily[0,:], y_total[0,:]])

    # optmize kernel parameters
    print("optimizing params....")
    [sig_f_opt,l_opt] = mleopt(x_days.T,y_train.T,noise_var,[sigma_f,l], kerneltype)
    l = l_opt
    sigma_f = sig_f_opt
    print("using optimized params..")

    # prior GP
    mean_train = np.zeros(x_days.shape[1])
    kernel_train = kernel_func(x_days.T,x_days.T,l=l,sig_f=sigma_f)+noise_var**2*np.eye(x_days.shape[1])
    sample_train = np.random.multivariate_normal(mean_train.ravel(),kernel_train,2)
    # mplt.plot(sample_train.T[0],label='$daily-vaccine_{trainingSamples}$')

    # test data
    x_test = np.arange(1,test_days+1,1).reshape(1,-1)

    # posterior GP
    kernel_test = kernel_func(x_test.T, x_test.T, l = l, sig_f = sigma_f, type =  kerneltype)+noise_var**2*np.eye(x_test.shape[1])
    kernel_test_train = kernel_func(x_test.T,x_days.T,l=l,sig_f=sigma_f)
    post_mean = np.dot(np.dot(kernel_test_train,np.linalg.inv(kernel_train)),y_train.T)
    print("Posterior mean = "+str(post_mean.T))
    post_cov = kernel_test-np.dot(np.dot(kernel_test_train,np.linalg.inv(kernel_train)),kernel_test_train.T)
    print("Posterior Covariance :\n"+str(post_cov))
    post_data = np.array([np.random.multivariate_normal(post_mean.T[i],post_cov,2) for i in range(post_mean.shape[1])])#.reshape()

   # plotting
    mplt.plot(1e-8*post_data[0,:,:].T,label='$daily-vaccine_{predictionSamples}$')
    mplt.plot(1e-8*post_data[1,:,:].T,label='$total-vaccine_{predictionSamples}$')
    mplt.fill_between(x_test.ravel(), 1e-8*post_mean.T[1]-3*np.sqrt(np.diag(post_cov)), 1e-8*post_mean.T[1]+3*np.sqrt(np.diag(post_cov)), color='red', alpha=0.2, label='$+-3 \sigma_{total-pred}$')
    mplt.fill_between(x_test.ravel(), 1e-8*post_mean.T[0]-3*np.sqrt(np.diag(post_cov)), 1e-8*post_mean.T[0]+3*np.sqrt(np.diag(post_cov)), color='red', alpha=0.2, label='$+-3 \sigma_{daily-pred}$')
    mplt.legend()
    mplt.title("Sample prediction of Total and Daily Vaccination Counts vs Day Numbers in $10^{-8}$ scale")
    # mplt.show()

    lw = 1
    ms = 4
    fs = 10
    markat = [10, 30, 60, 90, 120, 150, 180, 210, 240, 250]
    fig, axes = mplt.subplots(nrows=2, ncols=1,figsize=(6,6))
    
    axes[0].plot(x_train.T, y_train[0].reshape(-1,1), 'g+', lw= lw, label='$daily-vaccine_{train}$')
    axes[0].plot(x_test.T, post_mean.T[0].reshape(-1,1), 'Dg-', lw=lw, markevery= markat, label='$mean-daily-vaccine_{pred}$')
    axes[0].fill_between(x_test.ravel(), post_mean.T[0]-3*np.sqrt(np.diag(post_cov)), post_mean.T[0]+3*np.sqrt(np.diag(post_cov)), color='red', alpha=0.2, label='$3 \sigma_{daily-pred}$')
    axes[0].set_xlabel(headers[0,0] , fontsize = fs)
    axes[0].set_ylabel(headers[0,1] , fontsize = fs)
    axes[0].set_title('daily vaccination stats')
    axes[0].legend()

    axes[1].plot(x_train.T, y_train[1].reshape(-1,1), 'b+', lw= lw, label='$total-vaccine_{train}$')
    axes[1].plot(x_test.T, post_mean.T[1].reshape(-1,1), 'Db-', lw=lw, markevery= markat, label='$mean-total-vaccine_{pred}$')
    axes[1].fill_between(x_test.ravel(), post_mean.T[1]-3*np.sqrt(np.diag(post_cov)), post_mean.T[1]+3*np.sqrt(np.diag(post_cov)), color='red', alpha=0.2, label='$3 \sigma_{total-pred}$')
    axes[1].set_xlabel(headers[0,0] , fontsize = fs)
    axes[1].set_ylabel(headers[0,1] , fontsize = fs)
    axes[1].set_title('total vaccination stats')
    axes[1].legend()

    print("-------------------------------------------------------------\n With optimized Parameter Values, l = "+str(l)+" and sigma_F = "+str(sigma_f)+" for "+str(kerneltype)+" kernel, expected (prediction of) \n")
    j = 0
    for i in markat:
        j = j+1
        print(str(j)+"\t daily vaccination on "+str(i)+"-th day is :\n \t\t\t"+str(post_mean.T[0,i])+" with +-"+str(2*np.sqrt(np.diag(post_cov)[i]))+" deviation\n")
        
        print("\t and total vaccination on "+str(i)+"-th day is :\n \t\t\t"+str(post_mean.T[1,i])+" with +-"+str(2*np.sqrt(np.diag(post_cov)[i]))+" deviation\n")
    mplt.show()


if __name__ == '__main__':
    main()
