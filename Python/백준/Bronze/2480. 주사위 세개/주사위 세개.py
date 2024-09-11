a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
max = a
if b>max:
    max = b
if c>max:
    max = c
    
if a==b and b==c:
    print(10000+1000*a)
elif (a==b and b!=c) or (b==c and a!=c):
    print(1000+b*100)
elif (a==c and b!=c):
    print(1000+c*100)
else:
    print(100*max)