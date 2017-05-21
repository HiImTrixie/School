#include <iostream>

class Queue{

    private:
    int *A;
    int front, rear, size;
    public:
    Queue(int);
    ~Queue(void);
    bool isEmpty(void);
    void Enqueue(int);
    void Dequeue(void);
    int Front(void);
    Queue(Queue&);
};

Queue::Queue(int n){
    size = n;
    A = new int[n];
    front = -1;
    rear = -1;
}
Queue::~Queue(void){
    delete [] A;
}

bool Queue::isEmpty(void){
    return(front == -1 && rear == -1);
}

void Queue::Enqueue(int x){
    if(isEmpty()){
        front = rear = 0;
    }else{
        rear = (rear+1)%size;
    }
    A[rear] = x;
}

void Queue::Dequeue(void){
    if(isEmpty()){
        std::cout << "Queue is Empty. Cannot remove element from empty queue." << std::endl;
        return;
    }else if(front == rear){
        rear = front = -1;
    }else{
        front = (front+1)%size;
    }
}

int Queue::Front(void){
    if(isEmpty()){
        std::cout << "Queue is Empty. Cannot return first element from empty queue." << std::endl;
        return -1;
    }
    return A[front];
}
/*
Queue::Queue(Queue & que){
    if(que.front == que.rear){
        front = rear = -1;
    }else{
        //std::copy(std::begin(que.A), std::end(que.A), std::begin(A);
        front = que.front;
        rear = que.rear;
    }
}*/

int main(){
    Queue q(5);
    q.Enqueue(6);
    q.Enqueue(7);
    (q.isEmpty()) ? std::cout << "Queue is Empty.\n" : std::cout << "Queue is not empty\n";
    std::cout << "First element in Queue is " << q.Front() << std::endl;
    //Queue q2(q);
    return 0;
}
