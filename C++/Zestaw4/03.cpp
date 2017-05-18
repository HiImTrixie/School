#include <iostream>
#include <string>


template<typename T>
T multi(T n, unsigned int m){
    T result;
    if(n != 0 || m != 0){
        result = n * m;
        return result;
    }else{
        return 0;
    }
}

int main(){
    std::string type;
    int i, a;
    double j, b;
    unsigned int k, m, c;

    std::cout << "Type the type you want function to return(int, double, unsigned int): " << std::endl;
    std::getline(std::cin, type);
    if(type == "int"){
        std::cout << "Type the numbers you want to multiply 1st have to be integer the 2nd have to be natural number: ";
        std::cin >> i >> m;
        a = multi<int>(i, m);
        std::cout << "" << i << " * " << m << " = " << a << std::endl;
    }else if(type == "double"){
        std::cout << "Type the numbers you want to multiply 1st have to be float the 2nd have to be natural number: ";
        std::cin >> j >> m;
        b = multi<double>(j, m);
        std::cout << "" << j << " * " << m << " = " << b << std::endl;
    }else if(type == "unsigned int"){
        std::cout << "Type the numbers you want to multiply both have to be natural numbers: ";
        std::cin >> k >> m;
        c = multi<unsigned int>(k, m);
        std::cout << "" << k << " * " << m << " = " << c << std::endl;
    }else{
        std::cout << "You typed wrong type." << std::endl;
    }
    return 0;
}


