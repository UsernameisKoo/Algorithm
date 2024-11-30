import sys
a = [[0 for j in range(100)] for i in range(100)]
n = int(sys.stdin.readline().strip())
for i in range(n):
    x,y = map(int,sys.stdin.readline().split())
    for j in range(10):
        for k in range(10):
            a[x+j][y+k] = 1

cnt = 0
for j in range(100):
        for k in range(100):
            if a[j][k] == 1:
                cnt+=1
print(cnt)
