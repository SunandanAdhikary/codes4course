# Programming Assignment 2: Gibbs Sampling
> Due 7 November 2021 23:59Closes 7 November 2021 23:59
## Instructions
Consider a `30x30` pixel gray-scale image, where *each pixel can have an intensity value in [0, 1]*. We may model the image as being generated from a 900 dimensional Gaussian distribution, where each dimension represents a pixel. The mean vector of the Gaussian is 900 dimensional and is determined by the pattern of the image. Assume that the mean of the dimension corresponding to (i, j)th pixel is given by (i+j)/100.  The (900x900) covariance matrix is diagonal with each diagonal element being 0.1. 

Use Gibbs sampling to generate image samples from this high dimensional distribution. Assume, a 900 dimensional vector with each element being 0.5 ,as the initial state.  You may visualize the sample obtained after every 10 iterations as a 30x30 image. 

**Submit your program and a summary report  on the parameters chosen and the simulation results.**