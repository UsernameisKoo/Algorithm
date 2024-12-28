import sys

a,b,c = map(int,sys.stdin.readline().split())

if(max(a,b,c)>=a+b+c-max(a,b,c)):
    new_max = a+b+c-max(a,b,c)-1
    print(a+b+c-max(a,b,c)+new_max)
else:
    print(a+b+c)