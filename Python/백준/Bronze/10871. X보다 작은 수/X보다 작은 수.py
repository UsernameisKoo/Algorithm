import sys
n,x = map(int,sys.stdin.readline().split())
list = list(map(int,sys.stdin.readline().split()))

for num in list:
    if num<x:
        print(num,end=' ')