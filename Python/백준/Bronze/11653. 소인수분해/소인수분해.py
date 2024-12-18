import sys

n = int(sys.stdin.readline().strip())

d = 2
while(d <= n):
    if(n%d==0):
        while(n%d==0):
            print(d)
            n /= d
    d += 1
