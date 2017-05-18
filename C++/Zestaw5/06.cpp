#include <iostream>
#include <utility>


class Point{
    private:
    int x, y;
    public:
    void load_values_to(int n, int m);
    int* load_values_from(void);
};

void Point::load_values_to(int n, int m){
    x = n;
    y = m;
}

int* Point::load_values_from(void){
    int results[2] = {x, y};
    return results;
}

int main(){
    Point p;
    std::cout << "Values before change" << std::endl;
    std::cout << "First value = " << p.load_values_from()[1] << std::endl << "Second value = " << p.load_values_from()[1] << "\n" << std::endl;
    p.load_values_to(4,5);
    std::cout << "Values after change" << std::endl;
    std::cout << "First value = " << p.load_values_from()[0] << std::endl << "Second value = " << p.load_values_from()[1] << std::endl;
    return 0;
}
