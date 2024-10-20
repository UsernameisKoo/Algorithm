import sys
n = int(sys.stdin.readline().strip('\n'))
sum = 0
list = list(map(int, sys.stdin.readline().split()))
max = max(list)
for i in range(n):
    list[i] = list[i]/max*100
    sum += list[i]
print(sum/n)