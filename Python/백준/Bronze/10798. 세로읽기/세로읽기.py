import sys

a = [list(sys.stdin.readline().strip()) for i in range(5)]

l = len(a[0])
for i in range(5):
    if len(a[i]) > l:
        l = len(a[i])
        

for i in range(l):
    for j in range(5):
        try:
            print(a[j][i], end = "")
        except:
            continue