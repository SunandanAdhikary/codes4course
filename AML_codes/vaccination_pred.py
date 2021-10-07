from os import read
import sys
import matplotlib as mpl
import matplotlib.pyplot as mplt
import scipy
import pandas as pnd
import numpy as np

def kernel_func(x1,x2, l=1.0, sig_f=1.0, noise_var=0.0):
    # print(x1.T)
    K_rbf = sig_f**2*np.exp(-0.5/l*np.dot((x1-x2),(x1-x2).T))
    K_dotpr = noise_var + np.dot(x1,x2.T)
    K_noise  = K_rbf + noise_var*np.eye(K_rbf.shape[0])
    # print(K_noise)
    return K_noise

def main():
    # training data
    data = pnd.read_csv('vaccination.csv')
    headers = data.columns.values.reshape(1,-1)
    x_days = data.Day_Number.values.reshape(1,-1)
    x_daily = data.daily_vaccinations.values.reshape(1,-1)
    x_total = data.total_vaccinations.values.reshape(1,-1)
    x_train = np.stack([x_daily[0,:], x_total[0,:]])
    # x_train = np.stack([x_daily[0,:],x_total[0,:]])
    # data_stats = data.agg(["mean", "var"])
    # print(x_train)
    # data_mu = data_stats.mean().values.reshape(1,-1)[0,1:]
    # data_variance = data_stats.var().values.reshape(1,-1)[0,1:]
    data_mean = np.array(np.mean(x_train,axis=1,dtype=np.float64))
    data_cov = np.cov(x_train,dtype=np.float64)
    x_test = np.random.multivariate_normal(data_mean.ravel(),data_cov,250)
    # print(x_test)
    mplt.plot(x_test.T[0])
    # mplt.show()
    # kernel params
    l = 5.3
    sigma_f = 10
    noise_var = 0.1
    # prior GP
    prior_mean = np.zeros(x_train.shape[0])
    kernel_train = kernel_func(x_train,x_train,l=l,sig_f=sigma_f,noise_var=noise_var)
    prior_data = np.random.multivariate_normal(data_mean.ravel(),kernel_train,x_train.shape[1])
    mplt.plot(prior_data.T[0])
    mplt.plot(prior_data.T[1])
    # print(prior_data)
    # mplt.plot(x_days[0,:],prior_data.T[0])
    # mplt.show()
    # posterior GP
    # print(kernel_train)
    kernel_test = kernel_func(prior_data.T,prior_data.T,l=l,sig_f=sigma_f,noise_var=noise_var)
    # print(kernel_test)
    kernel_test_train = kernel_func(x_train,prior_data.T,l=l,sig_f=sigma_f,noise_var=noise_var)
    # print(kernel_test_train)
    # print(kernel_test_train*np.linalg.inv(kernel_train))
    post_mean = np.dot((kernel_test_train*np.linalg.inv(kernel_train)),(x_train))
    # print(post_mean)
    post_cov = kernel_test-kernel_test_train*np.linalg.inv(kernel_train)*kernel_test_train
    # print(post_mean[1]-np.sqrt(post_cov[1,1]))
    post_data = post_mean
    # post_data = np.array([np.random.multivariate_normal(post_mean.T[i],post_cov,2) for i in range(post_mean.shape[1])])#.reshape()
    # print(np.sqrt(post_cov[1,1]))
    # mplt.fill_between(post_mean[1]-2*np.sqrt(post_cov[1,1]),post_mean[1]+2*np.sqrt(post_cov[1,1]),alpha=0.4)
    # mplt.show()

    # plotting
    lw = 1
    fs = 10
    markat = [10, 30, 60, 90, 120, 150, 180, 210, 240, 250]
    t = x_days[0,:]#np.arange(0,x_train.shape[1],1)#.reshape(-1,1)
    fig, axes = mplt.subplots(nrows=2, ncols=1,figsize=(6,6))
    
    axes[0].plot(t, x_train[0].T, 'ko', lw= lw, label='$x_{daily}$')
    axes[0].plot(t, post_data[0,:].T, 'k-', lw=lw,  markevery= markat[0:-2], label='$x_{daily-pred}$')
    # axes[0].plot(t, post_mean[0]*np.ones(post_data.T[0,:].shape), 'k--', lw=lw,  label='$mean_{daily-prior}$')
    # axes[0].plot(t, post_mean[0], 'k--', lw=lw,  label='$mean_{daily-pred}$')
    axes[0].fill_between(t.ravel(), post_mean[0]-np.sqrt(post_cov[0,0]), post_mean[0]+np.sqrt(post_cov[0,0]), color='red', alpha=0.15, label='$2 \sigma_{daily-pred}$')
    axes[0].set_xlabel(headers[0,0] , fontsize = fs)
    axes[0].set_ylabel(headers[0,1] , fontsize = fs)
    axes[0].set_title('daily vaccination stats')
    axes[0].legend()
    # mplt.show()

    axes[1].plot(t, x_train[1,:].T, 'bo', lw= lw, label='$x_{total}$')
    axes[1].plot(t, post_data[1,:].T, 'b-', lw=lw,  label='$x_{total-pred}$')
    # axes[1].plot(t, data_mean[0]*np.ones(post_data.T[0,:].shape), 'b--', lw=lw,  label='$mean_{total-prior}$')
    # axes[1].plot(t, post_mean[1], 'b--', lw=lw,  label='$mean_{total-prior}$')
    axes[1].fill_between(t.ravel(), post_mean[1]-np.sqrt(post_cov[1,1]), post_mean[1]+np.sqrt(post_cov[1,1]), color='blue', alpha=0.15, label='$2 \sigma_{total-prior}$')
    axes[1].set_xlabel(headers[0,0] , fontsize = fs)
    axes[1].set_ylabel(headers[0,2] , fontsize = fs)
    axes[1].set_title('total vaccination stats')
    axes[1].legend()

    # mplt.plot(prior_data)
    # mplt.subplot(3,1,1)
    # for i in range(prior_data.shape[0]):
    #     mplt.plot(prior_data[i,:])
    #     # print(prior_daily_data[i,:])
    
    # mplt.subplot(3,1,2)
    # mplt.plot(x_daily[0])
    # mplt.subplot(3,1,3)
    # mplt.plot(x_total[0])
    mplt.show()




if __name__ == '__main__':
    main()
