import random
class Queue:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def enqueue(self, item):
        self.items.insert(0, item)

    def dequeue(self):
        return self.items.pop()

    def size(self):
        return len(self.items)

class Printer(Queue):

def printer(speedpage, students=10, lesson=60, tasks=2):
    result = 0
    for i in range(students):
        for j in range(tasks):
            que.enqueue(random.randint(1,20))
    for k in que.items:
        result += k
    que.items = []
    print result / (students*tasks)

for i in range(3):
    z = random.randint(2, 10)
    print "Czas drukowania 1 kartki = %i sec" %z
    printer(z)