import numpy as np

def insertionsort(alist):
    for i in range(1, len(alist)):
        tmp = alist[i]
        k = i
        while k > 0 and tmp < alist[k - 1]:
            alist[k] = alist[k - 1]
            k -= 1
        alist[k] = tmp

def abc(alist):
    if len(alist) <= 3:
        insertionsort(alist)
    else:
        end = len(alist)-2
        z = alist[0:end].sort()
        return z

print abc([5,3,4,2,11,7,8])