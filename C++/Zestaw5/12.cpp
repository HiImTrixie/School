#include <iostream>

class Stack{
    private:
    int size, top;
    int *A;
    
    public:
    Stack(int);
    ~Stack(void);
    void Push(int);
    void Pop(void);
    int Top(void);
    bool isEmpty(void);
};

Stack::Stack(int n){
    size = n;
    top = 0;
    A = new int[n];
}

Stack::~Stack(void){
    delete [] A;
}

void Stack::Push(int x){
    A[top] = x;
    top++;
}
void Stack::Pop(void){
    if(isEmpty()){
        std::cout << "Stack is Empty. Cannot pop from empty stack." << std::endl;
    }else{
        top--;
    }
}

int Stack::Top(void){
    if(isEmpty()){
        std::cout << "Stack is Empty. There is no top." << std::endl;
    }else{
        return A[top-1];
    }
}

bool Stack::isEmpty(void){
    return(top==0);
}

int main(){
    Stack s(5);

    s.Push(10);
    (s.isEmpty()) ? std::cout << "Stack is Empty.\n" : std::cout << "Stack is not empty.\n";
    s.Pop();
    (s.isEmpty()) ? std::cout << "Stack is Empty.\n" : std::cout << "Stack is not empty.\n";
    return 0;
}
