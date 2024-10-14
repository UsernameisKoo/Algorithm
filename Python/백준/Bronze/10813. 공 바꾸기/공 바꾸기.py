import sys
n,m = map(int,sys.stdin.readline().split())
list = [num+1 for num in range(n)]
for _ in range(m):
    i, j = map(int,sys.stdin.readline().split())
    temp = list[i-1]
    list[i-1] = list[j-1]
    list[j-1] = temp

for num in list:
    print(num, end=' ')