#!/usr/bin/env python

import time

if __name__ == '__main__':

    n=int(input())

    start = time.time()
    
    sum(xrange(n+1))
    
    end = time.time()
    
    print end - start
