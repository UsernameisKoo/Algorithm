import sys
count = 0
n = int(sys.stdin.readline().strip())
for _ in range(n):
    str = sys.stdin.readline().strip()
    list = [0 for i in range(26)]
    for i in range(len(str)):
        if(i>0 and str[i]!=str[i-1]):
            list[ord(str[i-1])-ord('a')] += 1
        if(i==len(str)-1):
            list[ord(str[i])-ord('a')] += 1
    for i in range(26):
        if(list[i]>1):
            count+=1
            break
print(n-count)