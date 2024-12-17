import sys
n = int(sys.stdin.readline().strip())
cnt = 1
n -= 1
while(1):
    if(n<=0):
        break
    n = n - 6*cnt
    cnt += 1
    

print(cnt)