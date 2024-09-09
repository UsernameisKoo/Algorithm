h, m = input().split()
h = int(h)
m = int(m)
if m>=45:
    print("%d %d"%(h,m-45))
elif h>=1 and m<45:
    print("%d %d"%(h-1,m + 60 -45))  
else:
    print("%d %d"%(23 ,m + 60 -45))