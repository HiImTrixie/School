#include <iostream>
#include <vector>
#include <random>
#include <cmath>


double geom(unsigned int n, std::vector <unsigned int> array){
    
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(1, 100);
    int m;
    double result=1, true_result;
        
    while(array.size() != n){
        m = uni(rng);
        result *= m;
        array.push_back(m);
    }
    true_result = pow(result, 1.0/n);
    return true_result;
}

int main(){
    int n;
    std::vector<unsigned int> array;

    std::cout << "Give the length of array: " << std::endl;
    std::cin >> n;
    std::cout << "Gemetric mean of array equals to: " << geom(n, array) << std::endl;
    return 0;
}
