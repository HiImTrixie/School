#include <iostream>


void exchange(int* n, int* m){
    int temp;
    if(*n > *m){
        temp = *n;
        *n = *m;
        *m = temp;
    }
}

int main(){
    int n, m;
    
    std::cout << "Give two numbers:" << std::endl;
    std::cin >> n >> m;
    
    std::cout << "Numbers before exchange function:" << std::endl;
    std::cout << "N = " << n << " M = " << m << std::endl;
    exchange(&n, &m);
    std::cout << "Numbers after exchange function:" << std::endl;
    std::cout << "N = " << n << " M = " << m << std::endl;
    return 0;
}
