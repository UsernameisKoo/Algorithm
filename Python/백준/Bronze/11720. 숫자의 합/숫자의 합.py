import sys
n = sys.stdin.readline().strip('\n')
num = sys.stdin.readline().strip('\n')
sum = 0
for i in num:
    sum += int(i)
print(sum)