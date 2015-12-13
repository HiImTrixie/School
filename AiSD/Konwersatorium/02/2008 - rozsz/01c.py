def abc(a, n):
    while n > 1:
        a = a * a
        n = n // 2
    return a

print abc(2,2)