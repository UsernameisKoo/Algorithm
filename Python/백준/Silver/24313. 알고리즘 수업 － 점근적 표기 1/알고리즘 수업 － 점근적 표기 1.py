import sys
a,b = map(int,sys.stdin.readline().split())
c = int(input())
n = int(input())

if(a==c and b<=0):
    print(1)
elif(a==c and b>0):
    print(0)
elif(-b/(a-c)<=n and a<c):
    print(1)
else:
    print(0)