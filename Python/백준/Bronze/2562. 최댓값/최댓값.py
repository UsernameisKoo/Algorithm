import sys
list = []
max = 0
for _ in range(9):
    list.append(int(sys.stdin.readline().strip('\n')))

for i in range(9):
    if list[max] < list[i]:
        max = i
print(list[max])
print(max+1)