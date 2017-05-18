#include <iostream>
#include <vector>


std::vector<int> sum(int n){
    std::vector<int> results;
    for(int a=1; a < n; a++){
        for(int b=1; b < n; b++){
            if(((a*a) + (b*b)) == n){
                results.push_back(a);
                results.push_back(b);
            }
        }
    }
    return results;
}

int main(){
    int n, i=0;
    std::cout << "Give number you want to find sums of: ";
    std::cin >> n;

    std::vector<int> results = sum(n);
    for(std::vector<int>::iterator it = results.begin(); it != results.end(); ++it){
        if(i == 0){
            std::cout << "A = " << *it << std::endl;
            i++;
        }else if(i == 1){
            std::cout << "B = " << *it <<std::endl;
            i = 0;
        }
    }
    return 0;
}
