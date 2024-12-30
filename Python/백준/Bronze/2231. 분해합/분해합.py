import sys

n = input()
len = len(n)
n = int(n)

if(len<=6):
    max = 9*len
else:
    max = 54
    
for i in range(n-max,n):
    cnt = len - 1
    sum = i
    tmp = i
    while(1):
        if(cnt == -1):
            break
        sum += tmp // (10 ** cnt)
        tmp -= (tmp // (10 ** cnt)) * (10 ** cnt)
        cnt -= 1
    if(sum==n):
        print(i)
        sys.exit(0)
print(0)