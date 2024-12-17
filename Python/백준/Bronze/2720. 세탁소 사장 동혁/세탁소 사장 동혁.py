import sys
t = int(sys.stdin.readline().strip())
for i in range(t):
    c = int(sys.stdin.readline().strip())
    print(c//25, end = " ")
    c = c%25
    print(c//10, end = " ")
    c = c%10
    print(c//5, end = " ")
    c = c%5
    print(c)