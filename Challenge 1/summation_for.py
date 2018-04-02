#!/usr/bin/env python

'''
The basic for loop in python is slow, python is dynamically typed so the type of a variable cannot be fixed beforehand. 
Here, the variable i goes from 1 to n, where n would be in the order of 10^8, so the type of the variable i has to be checked 
on every iterations and the allocated space be resized when required. xrange is used in place of range here (python2.7 only),
range would have been faster but xrange being a generator, is more efficient. The order of the input provided
for benchmarking will be 10^8, so a call to range(10**8) would slow things down considerably due to the fact
that the interpreter will try to allocate a huge amount of memory to contain integers from 1 to 10^8. 
'''

import time

if __name__ == '__main__':
   
    n = int(input())
   
    Sum = 0
    start = time.time()
   
    for i in xrange(1, n+1):
        Sum += i
   
    end = time.time()
   
    print end - start
