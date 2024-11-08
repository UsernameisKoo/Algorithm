import sys
n = int(sys.stdin.readline().strip())
for line in range(1,n+1):
    for star in range(n-line):
        print(" ",end="")
    for star in range(2*line-1):
        print("*",end="")
    print()
for line in range(1,n):
    for star in range(line):
        print(" ",end="")
    for star in range(2*n-2*line-1):
        print("*",end="")
    print()