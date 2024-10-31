import sys
a,b = sys.stdin.readline().split()



new_a = ''
for i in a[::-1]:
    new_a += i
new_b = ''
for i in b[::-1]:
    new_b += i

if(new_a>new_b):
    print(new_a)
else:
    print(new_b)