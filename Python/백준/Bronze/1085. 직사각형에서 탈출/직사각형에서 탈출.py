import sys
import math
a,b,c,d = map(int,sys.stdin.readline().split())
m = c-a if c-a<a else a
n = d-b if d-b<b else b

print(m if m<n else n)