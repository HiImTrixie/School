#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

double uniformRandom(){
    return ((double)(rand()) + 1.) / ((double)(RAND_MAX) + 1.);
}

double monte_carlo_method(){
    int hit_circle=0, max_hits=0;
    long double result;
    srand(time(NULL));
    while(max_hits < 100000000){
        double u1 = uniformRandom();
        double u2 = uniformRandom();
        if((u1*u1) + (u2*u2) < 1){
            hit_circle++;
        }
        max_hits++;
    }
    result = 4.0 * (long double)hit_circle / (long double)max_hits;
    return result;

}

int main(){
    std::cout << "PI = " << monte_carlo_method() << std::endl;
    return 0;
}
