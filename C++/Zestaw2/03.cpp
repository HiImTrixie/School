#include <iostream>

int main(){
    bool stop = false;
    int a, counter = 0;
    while(!stop){
        std::cin >> a;
        if(a > 0){
            counter++;
        }else{
            break;
        }
    }
    std::cout << "Amount of positive numbers: " << counter << std::endl;
    return 0;
}
