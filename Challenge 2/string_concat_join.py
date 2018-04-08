import time

'''
Strings are immutable in Python, so one of the most popular and efficient means of creating a single large string
out of smaller things is by using the join method. Here, map converts each integer recieved from xrange to its
equivalent string representation. The list of strings from 1 to N returned by map is then converted to a large string
using the join method.
'''

if __name__ == '__main__':

    n = int(input())

    start = time.time()

    ''.join(map(str,xrange(1, n+1)))
    
    end = time.time()
    
    print end - start
