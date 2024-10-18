import sys
list = []
for _ in range(10):
    n = int(sys.stdin.readline().strip('\n'))
    if len(list)==0:
        list.append(n%42)
    for i in range(len(list)):
        if(n%42 == list[i]):
            break
        if ((i == (len(list)-1)) and n != list[i]):
            list.append(n%42)
print(len(list))