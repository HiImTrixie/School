#include <iostream>


struct trojkat{
    int a;
    int b;
    int c;
};

int obwod(struct trojkat troj){
    int result;
    result = troj.a + troj.b + troj.c;
    return result;
}

int main(){
    trojkat troj;
    troj.a = 2;
    troj.b = 3;
    troj.c = 4;
    int obw = obwod(troj);
    std::cout << obw << std::endl;
    return 0;
}
