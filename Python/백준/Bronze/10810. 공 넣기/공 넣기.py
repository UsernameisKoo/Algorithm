import sys
n,m = map(int,sys.stdin.readline().split())
b = [0 for i in range(100)]
for line in range(m):
    i, j, k = map(int,sys.stdin.readline().split())
    for index in range(i-1,j):
        b[index] = k
for index in range(n):
    print(b[index], end=' ')