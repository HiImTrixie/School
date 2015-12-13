import math
def abc(d, text):
    w = []
    g = ""
    n = int(math.ceil(math.sqrt(d)))
    s = n * n
    for i in range(n):
        for j in range(n):
            if (i+(j*n)) < d:
                w.append(text[i+(j*n)])
            else:
                w.append("_")

    return s, g.join(w)


print abc(24, "ALGORYTM_PRZESTAWIENIAOWY")