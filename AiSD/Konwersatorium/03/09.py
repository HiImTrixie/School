import math
def T(n):
    if n == 1:
        return 4
    elif n == 2:
        return 4
    elif n > 2:
        return (2 * (T(math.floor(n/3)) + T(math.ceil(n/3))) + ((2 * n) + 4))


print T(10)

for k in range(6):
    print "Dla n = 3**%i wynik wynosi = %i" %(k, T(3**k))



