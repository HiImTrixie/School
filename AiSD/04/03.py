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

stack = Stack()


def prefix_to_infix(tokens):
    items = []
    for token in tokens:
        items.append(token)
    items.reverse()
    for item in items:
        if item in ['+', '-', '*', '/']:
            op1 = stack.Pop()
            op2 = stack.Pop()
            stack.Push('(%s %s %s)' % (op1, item, op2))
        else:
            stack.Push(item)
    return stack.Pop()
print prefix_to_infix("+*AB*CD")

