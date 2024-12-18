import sys

def divisor(m,n):
    result = []
    
    for i in range(m,n+1):
        prime = True
        if(i == 1):
            prime = False
        for j in range(2,int(i**(1/2))+1):
            if(i%j==0):
                prime = False
                break
        if(prime):
            result.append(i)
    return result

m = int(sys.stdin.readline().strip())
n = int(sys.stdin.readline().strip())

result = divisor(m,n)

sum = 0
if(len(result)):
    for i in result:
        sum += i
    print(sum)
    print(result[0])
else:
    print(-1)