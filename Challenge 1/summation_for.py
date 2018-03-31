import time
if __name__ == '__main__':
    n = int(input())
    start = time.time()
    Sum = 0
    for i in xrange(1, n+1):
        Sum += i
    end = time.time()
    print end - start, Sum
