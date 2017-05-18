#include <iostream>

int fib(int n){
    if(n < 0){
        std::cout << "Number cannot be negative." << std::endl;
        return 0;
    }
    else if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int n;
    std::cout << "Amount of fibonacci number you want to find ";
    std::cin >> n;
    int f = fib(n);
    std::cout << n << " number of fibonacci equals to " << f << std::endl;
    return 0;
}
