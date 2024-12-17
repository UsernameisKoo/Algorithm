import sys
import math
n,b = map(int, sys.stdin.readline().split())
x = int(math.log(n,b))

str = []
while(1):
    if(x<0):
        break
    y = n//pow(b,x)
    str.append(y)

    n = n%pow(b,x)
    x -= 1
    

for i in range(len(str)):
    if(str[i]>=10):
        print(chr(ord('A')+str[i]-10),end="")
    else:
        print(str[i],end="")
        