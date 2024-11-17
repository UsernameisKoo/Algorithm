import sys
str = sys.stdin.readline().strip()

str = str.upper()
max_idx = -1
max = -1
cnt = 0
for i in range(ord('A'),ord('Z')+1):
    if (max < str.count(chr(i))):
        cnt = 0
        max = str.count(chr(i))
        max_idx = i
    elif (max == str.count(chr(i))):
        cnt += 1
if(cnt == 0):
    print("%c"%(chr(max_idx)))
else:
    print("?")
    
