#include <iostream>

int GCD(int a, int b){
    if(b != 0){
        return GCD(b, a % b);
    }
    return a;
}

int main(){
    int a, b;

    std::cout << "Give a, b: " << std::endl;
    std::cin >> a >> b;

    std::cout << "GCD of a and b equals to: " << GCD(a, b) << std::endl;
    return 0;

}
