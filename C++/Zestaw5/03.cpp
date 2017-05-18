#include <iostream>


struct triangle{
	int a, h;
};

struct rectangle{
	int a, b;
};

struct trapeze{
	int a, b, h;
};

union values{
	struct triangle tri;
	struct rectangle rect;
	struct trapeze trap;
};

struct figure{
	union values vals;
	int fig;
};

double area(struct figure f){
	switch(f.fig){
		case 0:	return 0.5 * f.vals.tri.a * f.vals.tri.h;
		case 1: return f.vals.rect.a * f.vals.rect.b;
		case 2:	return 0.5 * (f.vals.trap.a + f.vals.trap.b) * f.vals.trap.h;
	}
}

int main(){
	figure f;
	int fig;

	std::cout << "Area of which figure you want to calculate type 0 for triangle, 1 for rectangle, 2 for trapeze." << std::endl;
	std::cin >> fig;
	f.fig = fig;
	if(fig == 0){
		std::cout << "Write base(a) of triangle = ";
		std::cin >> f.vals.tri.a;
		std::cout << "Write height(h) of triangle = ";
		std::cin >> f.vals.tri.h;
		std::cout << "Area of triangle = " << area(f) << std::endl;
		return 0;
	}else if(fig == 1){
		std::cout << "Write base(a) of rectangle = ";
		std::cin >> f.vals.rect.a;
		std::cout << "Write height(b) of rectangle = ";
		std::cin >> f.vals.rect.b;
		std::cout << "Area of rectangle = " << area(f) << std::endl;
		return 0;
	}else if(fig == 2){
		std::cout << "Write base(a) of trapeze = ";
		std::cin >> f.vals.trap.a;
		std::cout << "Write 2nd base(b) of trapeze = ";
		std::cin >> f.vals.trap.b;
		std::cout << "Write height(h) of trapeze = ";
		std::cin >> f.vals.trap.h;
		std::cout << "Area of trapeze = " << area(f) << std::endl;
		return 0;
	}else{
		return 0;
	}
}
