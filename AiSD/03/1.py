def abc(mk, n, MASA, CENA):
    K = []
    w = 0
    i = 0
    for i in range(1,n):
        K[i] = 0
        while i <= n and mk > 0:
            K[i] = (MASA[i] < mk)
            if (MASA[i] < mk):
                K[i] = 1
            mk = MASA[i] * K[i]
            w = CENA[i] * K[i]
            i = i + 1
    return K, w

print abc(10, 1, [8,4,1,2,3,5,1], [320,152,37,70,99,155,30])

