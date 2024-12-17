import sys

def square(n, sum):
    if(n>=1):
        return square(n-1, sum*2 - 1)
    else:
        return sum*sum
    
n = int(sys.stdin.readline().strip())
res = square(n, 2)
print(res)