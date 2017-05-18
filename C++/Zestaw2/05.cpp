#include <iostream>

int main(){
    char c;
    std::cin >> c;
    if(c == tolower(c) && isalpha(c)){
        std::cout << "Duza litera to " << c << std::endl;
    }else if(c == toupper(c) && isalpha(c)){
        std::cout << "Mala litera to " << c << std::endl;
    }else{
        std::cout << c << " nie jest litera." << std::endl;
    }
}
