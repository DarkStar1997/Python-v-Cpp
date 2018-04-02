#!/usr/bin/env python
import time

if __name__ == '__main__':
    n = int(input())
    Sum = 0
    start = time.time()
    for i in xrange(1, n+1):
        Sum += i
    end = time.time()
    print end - start
