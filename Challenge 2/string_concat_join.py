import time

'''
Strings are immutable in Python, so concatenating strings using += is
not an efficient means of concatenating strings. creating a single large
string out of smaller strings is by using the join method. Here, map
converts each integer received from xrange to its equivalent string representation.
The list of strings from 1 to N returned by map is then converted to
a large string using the join method.
'''

if __name__ == '__main__':
    n = int(input())

    start = time.time()

    ''.join(map(str, xrange(1, n + 1)))

    end = time.time()

    print end - start
