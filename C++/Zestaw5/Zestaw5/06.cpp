#include <iostream>
#include <utility>


class Point{
    private:
    int x, y;
    public:
    Point(int, int);
    void set_values(int, int);
    void load_values(void);
};

Point::Point(int a, int b){
	x = a;
	y = b;
}

void Point::set_values(int n, int m){
    x = n;
    y = m;
}

void Point::load_values(void){
	std::cout << "x = " << x << " y = " << y << std::endl;
}

int main(){
    Point p(3, 4);
    std::cout << "Values before change" << std::endl;
    p.load_values();
    p.set_values(4,5);
    std::cout << "Values after change" << std::endl;
    p.load_values();
    return 0;
}
