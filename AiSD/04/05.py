def brackets2(tokens):
    right = 0
    left = 0
    left2 = 0
    right2 = 0
    for i in tokens:
        if i == "(":
            left += 1
        elif i == ")":
            right += 1
        elif i == "[":
            left2 += 1
        elif i == "]":
            right2 += 1

    if right == left and right2 == left2:
        return True
    else:
        return False

print brackets2("(()()())")  #True
print brackets2("((()(")     #False
print brackets2("[()()()]")  #True
print brackets2("(()(")      #False