#include <iostream>
#include <utility>


class Point3d{
    private:
    int x, y, z;
    public:
    Point3d(int, int, int);
    void set_values(int, int, int);
    void load_values(void);
};

Point3d::Point3d(int n, int m, int k){
	x = n;
	y = m;
	z = k;
}

void Point3d::set_values(int n, int m, int k){
    x = n;
    y = m;
    z = k;
}

void Point3d::load_values(void){
	std::cout << "x = " << x << " y = " << y << " z = " << z << std::endl;
}

int main(){
    Point3d p(2,3,4);
    std::cout << "Values before change" << std::endl;
	p.load_values();
    p.set_values(4,5,6);
    std::cout << "Values after change" << std::endl;
    p.load_values();
    return 0;
}
