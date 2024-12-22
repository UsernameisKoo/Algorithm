import sys

l1 = []
l2 = []
sum_x, sum_y = 0, 0
for _ in range(3):
    x, y = map(int,sys.stdin.readline().split())
    l1.append(x)
    sum_x += x
    l2.append(y)
    sum_y += y


if(l1.count(l1[0])==1):
    print(l1[0],end = " ")
else:
    print(sum_x-l1[0]*2,end = " ")
if(l2.count(l2[0])==1):
    print(l2[0])
else:
    print(sum_y-l2[0]*2,end = " ")

