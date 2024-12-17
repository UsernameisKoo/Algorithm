import sys
a,b,v = map(int,sys.stdin.readline().split())

cnt = v//(a-b)-(a//(a-b))
v -= cnt*(a-b)
while(1):
    cnt += 1
    v -= a
    if(v<=0):
        break
    v += b

print(cnt)
