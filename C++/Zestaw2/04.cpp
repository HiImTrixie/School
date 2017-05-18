#include <iostream>

int main(){
    int a, counter_positive, counter_negative;
    while(true){
        std::cin >> a;
        if(a > 0){
            counter_positive++;
        }else if(a == 0){
            break;
        }
        else{
            counter_negative++;
        }
    }
    std::cout << "Amount of positive numbers: " << counter_positive << std::endl;
    std::cout << "Amount of negative numbers: " << counter_negative << std::endl;
    return 0;
}
