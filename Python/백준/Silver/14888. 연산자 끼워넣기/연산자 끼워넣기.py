import itertools
from functools import reduce
import sys
import time

length = input()
int(length)
input_num = list(map(int, sys.stdin.readline().split()))
input_oper = list(map(int, sys.stdin.readline().split()))

def insert_operation(length, input_num, input_oper):
    ops = {"0":(lambda x,y:x+y), "1": (lambda x,y:x-y), "2":(lambda x,y:x*y),"3":(lambda x,y:x//y if x>=0 else -((-x)//y))}
    oper_permutation = []
    result = []
    list(oper_permutation.extend([str(index)]*value) for index, value in enumerate(input_oper) if value > 0)
    permutation = [list(x) for x in set(itertools.permutations(oper_permutation))]
    #print(permutation)
    for i in permutation:
        result.append(reduce(lambda x,y : ops[i.pop()](x,y),input_num))
    #print(oper_permutation)
    
    #print(length,input_num, input_oper,result)
    print(str(max(result)) + "\n" + str(min(result)))
    #print(-1//3)
'''
6
1 2 3 4 5 6
2 1 1 1
'''

insert_operation(length,input_num, input_oper)