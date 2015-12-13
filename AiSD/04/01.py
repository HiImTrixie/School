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
