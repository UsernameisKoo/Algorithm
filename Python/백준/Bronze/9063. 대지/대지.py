import sys
n = int(sys.stdin.readline().strip())

list_x = []
list_y = []
for i in range(n):
    x, y = map(int, sys.stdin.readline().split())
    list_x.append(x)
    list_y.append(y)

print((max(list_x)-min(list_x))*(max(list_y)-min(list_y)))