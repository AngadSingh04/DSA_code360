from sys import *
from collections import *
from math import *

def findDuplicate(arr:list, n:int):
    set1 = set()
    for i in range(n):
        if arr[i] in set1:
            return arr[i]
        
        set1.add(arr[i])

    return -1