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


def ten_to_n(number, base):
    digits = "0123456789ABCDEF"
    newString = ""
    stack = Stack()

    while number > 0:
        rem = number % base
        stack.Push(rem)
        number = number // base

    while not stack.isEmpty():
        newString = newString + digits[stack.Pop()]

    return newString

print(ten_to_n(5,2))
print(ten_to_n(28,16))