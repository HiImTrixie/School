#include <iostream>


struct triangle{
    int a;
    int b;
    int c;
};

int perimeter(struct triangle tri){
    int result;
    result = tri.a + tri.b + tri.c;
    return result;
}

int main(){
    triangle tri;
    tri.a = 2;
    tri.b = 3;
    tri.c = 4;
    std::cout << "Perimeter of triangle of a = " << tri.a << ", b = " << tri.b << ", c = " << tri.c << " equals to " << perimeter(tri) << std::endl;
    return 0;
}
