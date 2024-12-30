import sys
n, m = map(int, sys.stdin.readline().split())

list = list(map(int, sys.stdin.readline().split()))
    
max = 0
for i in range(n-2):
    for j in range(i+1,n-1):
        sum = 0
        for k in range(j+1,n):
            sum = list[i] + list[j] + list[k]
            if(sum <= m and max < sum):
                max = sum

print(max)

