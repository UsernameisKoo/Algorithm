import sys
a,b,c,d,e,f = map(int, sys.stdin.readline().split()) 

x = int((c*e-b*f)/(a*e-b*d))
y = int((c*d-a*f)/(b*d-a*e))

print(x,y)