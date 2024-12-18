import sys
while(True):
    m, n = map(int, sys.stdin.readline().split())
    if(m==0 and n==0):
        break
    
    if(m%n==0):
        print("multiple")
    elif(n%m==0):
        print("factor")
    else:
        print("neither")
    