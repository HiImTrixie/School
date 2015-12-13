# -*- coding: utf-8 -*-
import math
def R(d, text):
    j = 0
    tab = []
    result = []
    size = int(math.ceil(math.sqrt(d)))
    size1 = size ** 2
    for i in range(size):
        tab.append([])
    for i in text:
        if len(tab[j]) == 4:
            tab[j].append(i)
            j += 1
        else:
            tab[j].append(i)
    for i in range(len(tab)):
        result.append(tab[0][i])
        result.append(tab[1][i])
        result.append(tab[2][i])
        result.append(tab[3][i])
        result.append(tab[4][i])
    return ''.join(result)
k = "Algorytm_przestawieniowy_"
print R(24,k)