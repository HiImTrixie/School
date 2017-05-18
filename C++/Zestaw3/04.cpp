#include <iostream>
#include <vector>


std::vector<int> triples(int n){
    
    std::vector <int> results;
    int a, b, c;

    for(int i=1; i <= n; i++){
        a = 2*i + 1;
        b = (2*i)*(i+1);
        c = ((2*i*i)+(2*i)+1);
        results.push_back(a);
        results.push_back(b);
        results.push_back(c);
    }
    return results;
}

int main(){
    int n, i=0;
    
    std::cout << "Give number of Pythagorean triples you want to find: ";
    std::cin >> n;
    
    std::vector<int> results = triples(n);
    
    for(std::vector<int>::iterator it = results.begin(); it != results.end(); ++it){
        if(i == 0){
            std::cout << "A = " << *it << " ";
            i++;
        }else if(i == 1){
            std::cout << "B = " << *it << " ";
            i++;
        }else if(i == 2){
            std::cout << "C = " << *it << std::endl;
            i = 0;
        }
    }
    return 0;
}
