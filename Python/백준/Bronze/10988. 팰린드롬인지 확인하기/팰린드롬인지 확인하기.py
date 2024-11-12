def check(str):
    for i in range(len(str)):
        if str[i] != str[len(str) - i -1]:
            return 0
    return 1


import sys
str = sys.stdin.readline().strip()

n = check(str)
print(n)