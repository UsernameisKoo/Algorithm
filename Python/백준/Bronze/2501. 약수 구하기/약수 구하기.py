def divisor(n):
    result = []
    for i in range(1,int(n**(1/2))+1):
        if(n%i==0):
            result.append(i)
            if(i**2!=n):
                result.append(n//i)
    result.sort()
    return result
import sys

n,k = map(int, sys.stdin.readline().split())

list = divisor(n)
if(len(list)>=k):
    print(list[k-1])
else:
    print("0")