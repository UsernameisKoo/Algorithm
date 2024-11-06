import sys
li = [1,1,2,2,2,8]

l = list(map(int,sys.stdin.readline().split()))
for i in range(len(li)):
    print(li[i]-l[i],end=' ')