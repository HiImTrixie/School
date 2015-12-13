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


for i in range(6):
    print "Dla n = 2**%i wynik wynosi = %i" %(i, T(2**i))
    print "Dla n = 2**%i wynik wynosi = %i" %(i, T2(2**i))
    print "Dla n = 2**%i wynik wynosi = %i" %(i, T3(2**i))

