def abc(w):
    z = ''
    w1 = []
    w2 = []
    w3 = []
    n = len(w)
    if n == 1:
        return 'TAK'
    elif n > 1 and n % 3 != 0:
        return "NIE"
    elif n % 3 == 0:
        x = n // 3
        for i in w:
            if len(w1) < x:
                w1.append(i)
            elif len(w2) < x:
                w2.append(i)
            elif len(w3) < x:
                w3.append(i)

    if w1 == w2 or w1 == w3:
        for j in w1:
          z += j
        print abc(z)
    else:
        return "NIE"

abc("aaaaaa")

