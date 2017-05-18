#include <iostream>
#include <string>
#include <stdlib.h>


class Calculator{
    double temp=0, result=0;
    public:
        void addition(void);
        void substraction(void);
        void multiplication(void);
        void division(void);
        double results(void);
};

void Calculator::addition(void){
    std::cout << "Write numbers you want to add. Write 99999 to stop." << std::endl;
    bool run = true;
    while(run){
        std::cin >> temp;
        if(temp == 99999){
            run = false;
        }else{
            result += temp;
        }
    }
}

void Calculator::substraction(void){
    std::cout << "Write numbers you want to substract. Write 99999 to stop." << std::endl;
    bool run = true;
    while(run){
        std::cin >> temp;
        if(temp == 99999){
            run = false;
        }else{
            result -= temp;
        }
    }
}

void Calculator::multiplication(void){
    std::cout << "Write numbers you want to multiply. Write 99999 to stop." << std::endl;
    bool run = true;
    while(run){
        std::cin >> temp;
        if(temp == 99999){
            run = false;
        }else{
            if(result == 0){
                result = temp;
            }else{
                result *= temp;
            }
        }
    }
}

void Calculator::division(void){
    std::cout << "Write numbers you want to divide. Write 99999 to stop." << std::endl;
    bool run = true;
    while(run){
        std::cin >> temp;
        if(temp == 99999){
            run = false;
        }else{
            if(result == 0){
                result = temp;
            }else{
                result /= temp;
            }
        }
    }
}

double Calculator::results(void){
    return result;
}
int main(){
    std::string function;
    Calculator calc;

    while(function != "="){
        std::cout << "Write function you want to do(+,-,*,/,=): ";
        std::cin >> function;
        if(function == "+"){
            calc.addition();
        }else if(function == "-"){
            calc.substraction();
        }else if(function == "*"){
            calc.multiplication();
        }else if(function == "/"){
            calc.division();
        }else if(function == "="){
            std::cout << "Your results equals to: " << calc.results() << std::endl;
            break;
        }else{
            std::cout << "You typed wrong function or made a typo." << std::endl << "Terminates program." << std::endl;
            break;
        }
    }
    return 0;
}
