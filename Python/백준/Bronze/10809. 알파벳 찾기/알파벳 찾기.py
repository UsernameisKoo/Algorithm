import sys
str = sys.stdin.readline().strip('\n')
list = [chr(i) for i in range(97,97+26)]
for i in list:
    print("%d"%str.find(i),end = ' ')