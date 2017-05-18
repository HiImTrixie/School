#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>

int multiplication(int n, int m){
    if(n > -1 && m > -1){
        if((n || m) > 0){
            return n * m;
        }
    }
}

int main(){
    std::string n, m;

    std::cout << "Give n, m: " << std::endl;
    std::getline(std::cin, n);
    std::getline(std::cin, m);
    std::cout << m;
    if(m == ""){
        int x = std::stoi(n);
        std::cout << "Result = " << multiplication(x, x) << std::endl;
    }else{
        int x = std::stoi(n);
        int y = std::stoi(m);
        std::cout <<  "Result = " << multiplication(x, y) << std::endl;
    }
    return 0;
}
