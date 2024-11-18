import sys
str = sys.stdin.readline().strip()

count = 0
count_dot = 0
count+=str.count('dz=')
str = str.replace('dz=','.')
count+=str.count('c=')
str = str.replace('c=','.')
count+=str.count('c-')
str = str.replace('c-','.')
count+=str.count('d-')
str = str.replace('d-','.')
count+=str.count('lj')
str = str.replace('lj','.')
count+=str.count('nj')
str = str.replace('nj','.')
count+=str.count('s=')
str = str.replace('s=','.')
count+=str.count('z=')
str = str.replace('z=','.')
count_dot += str.count('.')
print(count+len(str) - count_dot)
