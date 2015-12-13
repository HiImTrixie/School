# -*- coding: utf-8 -*-
import math
def R(d, text):
    tab = []
    result = []
    size = math.ceil(math.sqrt(d))
    size1 = int(size ** 2)
    for i in text:
        tab.append(i)
    if len(tab) == size1:
        pass
    else:
        tab.append("_")
    return tab


k = "Algorytm_przestawieniowy_"
print R(24,k)