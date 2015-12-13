def exponentiation(a, n):
    result = 1
    for i in range(n):
        result *= a
    return result
print exponentiation(2, 6)
