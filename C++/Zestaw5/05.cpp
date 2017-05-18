#include <iostream>
#include <cmath>

class Number{
    int n;
    public:
        void load(void);
        void print(void);
        void set(int m);
        int inside(void);
        unsigned int abs(void);

};

void Number::load(void){
    std::cin >> n;
}

void Number::print(void){
    std::cout << n;
}

void Number::set(int m){
    n = m;
}

int Number::inside(void){
    return n;
}

unsigned int Number::abs(void){
    return std::abs(n);
}

int main(){
    int value=0;
    Number number;

    std::cout << "Write a number = ";
    number.load();
    std::cout << "Print number = ";
    number.print();
    std::cout << std::endl << "Set number to -50";
    number.set(-50);
    std::cout << std::endl << "Current number = " << number.inside() << std::endl;
    std::cout << "Abs from current number = " << number.abs() << std::endl;
    return 0;
}
