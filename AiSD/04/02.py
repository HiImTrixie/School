class Stack:
    def __init__(self):
        self.stack = []

    def Push(self, value):
        self.stack.append(value)

    def Pop(self):
        return self.stack.pop()

    def Size(self):
        return len(self.stack)

    def Top(self):
        return self.stack[len(self.stack)-1]

    def isEmpty(self):
        if len(self.stack) == 0:
            return True
        else:
            return False


def infix_to_postfix(tokens):
    output = Stack()
    stack = []
    ops = []
    prec = {"+": 0, "-": 0, "*": 1, "/": 1}
    for item in tokens:
        if item in prec:
            ops.append(item)
        if item in ops:
            while stack and prec[stack[-1]] >= prec[item]:
                output.Push(stack.pop())
            stack.append(item)
        elif item == "(":
            stack.append("(")
        elif item == ")":
            while stack and stack[-1] != "(":
                output.Push(stack.pop())
        else:
            output.Push(item)
    while stack:
        output.Push(stack.pop())
    return output.stack

print infix_to_postfix("A*B+C*D")