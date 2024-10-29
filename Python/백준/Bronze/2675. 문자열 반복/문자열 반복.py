import sys
t = int(sys.stdin.readline().strip())
for _ in range(t):
    n, str = sys.stdin.readline().split()
    n = int(n)
    for i in str:
        for j in range(n):
            print(i,end='')
    print()