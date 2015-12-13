def brackets(tokens):
    right = 0
    left = 0

    for i in tokens:
        if i == "(":
            left += 1
        elif i == ")":
            right += 1
    if right == left:
        return True
    else:
        return False

print brackets("(()()())")  #True
print brackets("((()(")     #False
