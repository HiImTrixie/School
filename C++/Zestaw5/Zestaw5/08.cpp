#include <iostream>
#include <utility>

class Point{
	friend Point projection(Point3d);
	private:
	int x, y;
	public:
	Point(int, int);
	void set_values(int, int);
	void load_values(void);
//	void projection(Point3d);
};

class Point3d{
	private:
    int x, y, z;
	public:
    Point3d(int, int, int);
    void set_values(int, int, int);
    void load_values(void);
};

Point::Point(int n, int m){
	x = n;
	y = m;
}

void Point::set_values(int n, int m){
	x = n;
	y = m;
}

void Point::load_values(void){
	std::cout << "x = " << x << " y = " << y << std::endl;
}

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

Point projection(Point3d p3){
	Point p(2,3);
	p.x = p3.x;
	p.y = p3.y;
	return p;
}

/*void Point::projection(Point3d p3){
	x = p3.x;
	y = p3.y;
}*/

int main(){
	Point p2(3,4);
	Point3d p3(3,4,5);
    std::cout << "Values before change" << std::endl;
    std::cout << "Values after change" << std::endl;
    return 0;
}
