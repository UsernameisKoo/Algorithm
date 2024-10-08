import sys
n = int(input())

list = list(map(int, sys.stdin.readline().split()))

num = int(input())
cnt = 0
for i in range(n):
    if(list[i]==num):
        cnt+=1
print(cnt)