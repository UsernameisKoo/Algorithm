import sys
n,m = map(int,sys.stdin.readline().split())
list = [i+1 for i in range(n)]
for _ in range(m):
    i,j = map(int,sys.stdin.readline().split())
    for idx in range(i-1,int((j-i)/2) + i):
        temp = list[idx]
        list[idx] = list[(j-1)-(idx-i+1)]
        list[(j-1)-(idx-i+1)] = temp

for n in list:
    print(n, end=' ')