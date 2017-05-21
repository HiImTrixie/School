#include <iostream>

class Pointer{
    private:
    int* poi;

    public:
    void create(unsigned int);
    int* ret(void);
    void free(void);
    void copy(Pointer &);
    Pointer();
};

void Pointer::create(unsigned int n){
    poi = new int[n];
}

int* Pointer::ret(void){
    return poi;
}

void Pointer::free(void){
    delete [] poi;
    poi = NULL;
}

void Pointer::copy(Pointer &ref){
    ref.poi = poi;
}

Pointer::Pointer(){
    poi = NULL;
}

int main(){
    Pointer po;
    po.create(20);
    std::cout << po.ret() << std::endl;
    po.free();
    std::cout << po.ret() << std::endl;
    return 0;
}
