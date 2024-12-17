import sys
n = int(sys.stdin.readline().strip())

cnt = 1

while(1):
    if n == 1:
        print("1/1")
        break
    n -= cnt
    cnt += 1
    if(n-cnt<=0 and cnt%2 == 1):
        print("%d/%d"%(cnt+1-n,n))
        break
    elif(n-cnt<=0 and cnt%2 == 0):
        print("%d/%d"%(n,cnt+1-n))
        break