#include <iostream>

void exchange(int& a, int* b){
    int temp;
    temp = &a;
    *a = &b;
    &b = temp;
}
