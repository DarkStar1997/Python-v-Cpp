import array
import time

n = int(input())

t = time.time()  # type: float

array.array('i', xrange(1,n+1)).tostring()

print time.time()-t
