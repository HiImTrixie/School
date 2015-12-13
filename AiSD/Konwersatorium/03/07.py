import math
def T(n):
    if n == 1:
        return 1
    else:
        return (2*T(math.floor(n/2)) + ((3 * n) + 1))


def T2(n):
    if n == 1:
        return 1
    else:
        return (2*T2(math.ceil(n/2)) + ((3 * n) + 1))


def T3(n):
    if n == 1:
        return 1
    else:
        return ((T3(math.floor(n/2)) + T3(math.ceil(n/2))) + ((3 * n) + 1))


print T(2)
print T2(2)
print T3(2)
