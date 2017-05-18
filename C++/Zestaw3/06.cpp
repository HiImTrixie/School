#include <iostream>
#include <vector>
#include <random>

std::vector<double> random(int n){
    std::vector<double> results;
    double xn, xn1;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0, 1);

    xn1 = dis(gen);
    results.push_back(xn1);
    for(int x=0; x < n; x++){
        xn = 1 - (xn1 * xn1);
        results.push_back(xn);
        xn1 = xn;        
    }
    return results;
}

int main(){
    int n, i=0;
    std::cout << "Amount of pseudo-random numbers you want to generate: ";
    std::cin >> n;

    std::vector<double> results = random(n);

    for(std::vector<double>::iterator it = results.begin(); it != results.end(); ++it){
        std::cout << "N" << i << " = " << *it << std::endl;
        i++;
    }
    return 0;
}
