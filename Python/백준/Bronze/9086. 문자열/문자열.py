import sys
t = int(sys.stdin.readline().strip('\n'))
for _ in range(t):
    str = sys.stdin.readline().strip('\n')
    print("%c%c"%(str[0], str[len(str)-1]))