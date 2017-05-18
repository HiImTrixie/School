#include <iostream>

double linear_functions(int a1, int b1, int a2, int b2){
    double result;
    if(a1 == 0 || a2 == 0){
        std::cout << "No solution to given numbers" << std::endl;
    }else{
        result = ((b1 * (-1)) + b2) / (a1 + (a2 * (-1)));
    }
    return result;
}

int main(){
    int a1, b1, a2, b2;
    double result;

    std::cout << "Give a1 and b1:" << std::endl;
    std::cin >> a1 >> b1;
    std::cout << "Give a2 and b2:" << std::endl;
    std::cin >> a2 >> b2;
    
    double lf = linear_functions(a1, b1, a2, b2);
    std::cout << lf << std::endl;
    return 0;
}
