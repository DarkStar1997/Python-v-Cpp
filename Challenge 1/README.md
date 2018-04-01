# Challenge 1
In this challenge we will be testing the looping speed of C++ and Python. The looping speed will be tested by finding the sum of the numbers from 1 to N.

## Results

![Figure 1](https://github.com/DarkStar1997/Python-v-Cpp/blob/master/Challenge%201/Results.png)
![Figure 2](https://github.com/DarkStar1997/Python-v-Cpp/blob/master/Challenge%201/Results1.png)

## Lessons Learnt

Thus we can see, for loops are very slow in native Python. We should always go for other alternatives to avoid loops. For example to calculate the sum of elements of a list it's much more efficient to use the built-in sum function in Python. 

As for C++, for loops are very fast in general. As evident from the results, turning on optimisations speeds up the loop execution by a big margin. The for loops in C++ can also be parallelised with the help of OpenMP statements which come as a part of the GCC compiler. The difference between the optimised sequential and parallel C++ codes become evident only after about 10^8 in this challenge. This is because this problem is quite lightweight and thus the creation of threads and division of the workload to multiple cores takes a significant amount of time as compared to the sequential execution for the smaller inputs. For larger inputs, the execution time outweighs the time taken for the distribution of workload and the true effect of parallelism takes effect.
