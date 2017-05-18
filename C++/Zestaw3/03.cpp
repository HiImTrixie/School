#include <iostream>

int GCD_sub(int a, int b){
    while(a != b){
        if(a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

int GCD_div(int a, int b){
    if(b != 0){
        return GCD_div(b, a % b);
    }
    return a;
}

int main(){
    int a, b;
    std::string method;

    std::cout << "Give a and b:" << std::endl;
    std::cin >> a >> b;
    std::cout << "What version of GCD you want to use type SUB for substraction based method or type DIV for division based method." << std::endl;
    std::cin >> method;
   
   
    if(method == "SUB"){
        std::cout << "GCD of " << a << " and " << b << " equals to " << GCD_sub(a, b) << std::endl;
    }else if(method == "DIV"){
        std::cout << "GCD of " << a << " and " << b << " equals to " << GCD_div(a, b) << std::endl;
    }else{
        std::cout << "You didnt choose method or made a typo. Correct yourself." << std::endl;
    }
    return 0;

}
