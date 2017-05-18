#include <iostream>
#include <cmath>

int main(){
    float a, b, c, determinant, x0, x1, x2, result;
    
    std::cout << "Enter coefficients a,b, c: " << std::endl;
    std::cin >> a >> b >> c;

    if(a == 0){
        std::cout << "Your function is linear." << std::endl;
    }else{
        determinant = b * b - 4 * a * c;
        if(determinant == 0){
            x0 = -b / 2 * a;
            std::cout << "Your function has only one root and it equals to " << x0 << std::endl;
        }
        else if(determinant > 0){
            x1 = (-b + sqrt(determinant)) / (2 * a);
            x2 = (-b - sqrt(determinant)) / (2 * a);
            std::cout << "Your function has two roots." << std::endl;
            std::cout << "X1 = " << x1 << std::endl;
            std::cout << "X2 = " << x2 << std::endl;
        }else{
            std::cout << "Your function has no result in real numbers." << std::endl;
        }
    }
    return 0;
}
