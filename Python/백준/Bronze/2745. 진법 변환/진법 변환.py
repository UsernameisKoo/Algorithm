import sys
import math
str, n = sys.stdin.readline().split()
n = int(n)

sum = 0
cnt = 0
while(1):
    if(str[-1] >= '0' and str[-1] <= '9'):
        sum+= pow(n, cnt) * (ord(str[-1])-ord('0'))
    elif(str[-1] >= 'A' and str[-1] <= 'Z'):
        sum+= pow(n, cnt) * (ord(str[-1])-ord('A')+10)
    if(len(str)==1):
        break
    str = str[:-1]
    cnt += 1
print(sum)