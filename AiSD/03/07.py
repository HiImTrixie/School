from __future__ import division


def sum1(n):
    if n == 1:
        return 1
    elif n > 1:
        return 1/n + sum1(n-1)


def sum2(n):
    if n == 1:
        return 1
    elif n > 1:
        return 1/(n**2) + sum2(n-1)


def sum3(n):
    if n == 1:
        return 1
    elif n > 1:
        return n + sum3(n-1)


def sum4(n):
    if n == 1:
        return 2
    elif n > 1:
        return (2**n) + sum4(n-1)


def sum5(n):
    if n == 1:
        return 1
    elif n > 1:
        return (n*(n + 1)*((2*n) + 1)) / 6 + sum5(n-1)


print sum1(10)  # poprawny wynik dla n = 10 to:    2.92895825...
print sum2(10)  # poprawny wynik dla n = 10 to:    1.54986773...
print sum3(10)  # poprawny wynik dla n = 10 to:    55
print sum4(10)  # poprawny wynik dla n = 10 to:    2046
print sum5(10)  # poprawny wynik dla n = 10 to:    1210
