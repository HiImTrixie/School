def exponentiation(a, n):
    if n == 0:
        return 1
    else:
        return exponentiation(a, n-1)*a

print exponentiation(2, 6)
