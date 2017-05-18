#include <iostream>


int* reserve(void){
    int* n;
    n = new int[0];
    return n;
}

int main(){
    std::cout << reserve() << std::endl;
    return 0;
}
