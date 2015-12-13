def abc(n):
    s = [[], 0, 1]
    for i in range(2, n):
        i += 1
        if i % 2 == 0:
            s.append(i-1+2*s[i/2])
        else:
            s.append(i-1+s[(i-1)/2]+ s[(i+1)/2])
    s.pop(0)
    return s

print abc(6)

