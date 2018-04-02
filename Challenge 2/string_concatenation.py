import time, array
n=int(input())
t=time.time()
#list1=xrange(n+1)
#s=map(str,list1)
array.array('i', xrange(1,n+1)).tostring()
print time.time()-t
