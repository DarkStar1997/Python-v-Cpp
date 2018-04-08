import array
import time

n = int(input())  # type: int

start = time.time()  # type: float

array.array('i', xrange(1, n + 1)).tostring()

end = time.time()  # type: float

print time.time() - end
