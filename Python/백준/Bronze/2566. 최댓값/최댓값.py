import sys

a = [list(map(int,sys.stdin.readline().split())) for i in range(9)]
x, y = [0,0]
for i in range(9):
    for j in range(9):
        if a[x][y] < a[i][j]:
            x = i
            y = j

print(a[x][y])
print(x+1,y+1)