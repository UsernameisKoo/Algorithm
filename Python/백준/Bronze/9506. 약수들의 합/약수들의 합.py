import sys

def divisor(n):
    result = []
    for i in range(1, int(n**(1/2))+1):
        if(n%i==0):
            result.append(i)
            if(i**2!=n):
                result.append(n//i)
    result.sort()
    return result

while(1):
    n = int(sys.stdin.readline().strip())
    if(n==-1):
        break
    
    result = divisor(n)
    sum = 0
    for i in result[:-1]:
        sum += i
    
    print(n,end="")    
    if(sum == n):
        print(" = ", end = "")
        for i in result:
            if(i < result[len(result) - 2]):
                print("%d + "%i, end = "")
            elif(i == result[-2]):
                print("%d"%i)
    else:
        print(" is NOT perfect.")