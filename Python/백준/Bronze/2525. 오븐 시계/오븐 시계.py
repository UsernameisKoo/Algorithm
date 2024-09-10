a,b = input().split()
a = int(a)
b = int(b)
c = int(input())

h = (c+b)/60
m = (c+b)%60

print("%d %d"%((h+a)%24,m))