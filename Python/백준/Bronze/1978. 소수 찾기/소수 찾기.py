import sys

def divisor(n):
    result = True
    if(n == 1):
        result = False
    for i in range(2,int(n**(1/2))+1):
        if(n%i==0):
            result = False
            break
    return result

t = int(sys.stdin.readline().strip())
n = list(map(int,sys.stdin.readline().split()))

cnt = 0
for i in n:
    if(divisor(i)):
        cnt+=1
print(cnt)