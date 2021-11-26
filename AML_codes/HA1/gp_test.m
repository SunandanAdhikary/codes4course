clear;
options = detectImportOptions("vaccination.xlsx");
M = readmatrix("vaccination.xlsx",options);
x = M(:,1);
y = M(:,2:3);
xs = (1:250)';
% x = gpml_randn(0.8, 20, 1);                 % 20 training inputs
% y = sin(3*x) + 0.1*gpml_randn(0.9, 20, 1);  % 20 noisy training targets
% xs = linspace(-3, 3, 61)';                  % 61 test inputs
meanfunc = [];                    % empty: don't use a mean function
covfunc = @covSEiso;              % Squared Exponental covariance function
likfunc = @likGauss;              % Gaussian likelihood
hyp = struct('mean', [], 'cov', [0 0], 'lik', -1);
hyp2 = minimize(hyp, @gp, -100, @infGaussLik, meanfunc, covfunc, likfunc, x, y);
[mu s2] = gp(hyp2, @infGaussLik, meanfunc, covfunc, likfunc, x, y, xs);
f = [mu+2*sqrt(s2); flip(mu-2*sqrt(s2),1)];
fill([xs; flip(xs,1)], f, [7 7 7]/8)
hold on; plot(xs, mu); plot(x, y, '+');hold off;
