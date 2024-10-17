import sys
list = [0 for n in range(30)]
for _ in range(28):
    i = int(sys.stdin.readline().strip('\n'))
    list[i-1] = 1

for i in range(30):
    if list[i] == 0:
        print(i+1)