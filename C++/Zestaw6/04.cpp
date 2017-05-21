#include <iostream>


class Signal{
    private:
    int max, min=0, current=0;
    public:
    Signal(void);
    Signal(unsigned int);
    void reserve(void);
    void decrease(void);
    bool isMax(void);
};

Signal::Signal(unsigned int n){
    max = n;
}

Signal::Signal(void){
    max = 1;
}

void Signal::reserve(void){
    if(current < max){
        current++;
    }
}
void Signal::decrease(void){
    if(current > min){
        current--;
    }
}

bool Signal::isMax(void){
    return (current != max);
}

int main(){
    Signal sig;
    (sig.isMax()) ? std::cout << "Signal does not have maximum value.\n" : std::cout << "Signal does have maximum value.\n";
    sig.reserve();
    (sig.isMax()) ? std::cout << "Signal does not have maximum value.\n" : std::cout << "Signal does have maximum value.\n";
    return 0;
}
