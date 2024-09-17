import sys
result = int(input())
n = int(input())
sum = 0

for _ in range(n):
    a, b = map(int,sys.stdin.readline().split())
    sum += a*b

if sum == result:
    print("Yes")
else:
    print("No")