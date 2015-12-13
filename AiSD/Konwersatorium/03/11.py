'''
1       0
2       1
3        3 = n
4        5 = n + 1
5       8 = n + 3
6      11 = n + 5
7      14 = n + 7
'''
def sklej(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    elif n > 2:
        return n-1 + n

def sklej1(n):
    if n == 1:
        return 0
    elif n % 2 == 0:
        return n-1 + 2*sklej1(n/2)
    elif n % 2 != 0:
        return n-1 + sklej1((n-1)/2) + sklej1((n+1)/2)


print sklej1(7)