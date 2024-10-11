import sys
N=int(input())
a_list=list(map(int,sys.stdin.readline().split()))
print(min(a_list),max(a_list))