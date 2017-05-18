#include <iostream>
#include <utility>


class Point3d{
    private:
    int x, y, z;
    public:
    void load_values_to(int n, int m, int k);
    int* load_values_from(void);
};

void Point3d::load_values_to(int n, int m, int k){
    x = n;
    y = m;
    z = k;
}

int* Point3d::load_values_from(void){
    int results[3] = {x, y, z};
    return results;
}

int main(){
    Point3d p;
    std::cout << "Values before change" << std::endl;
    std::cout << "First value = " << p.load_values_from()[1] << std::endl << "Second value = " << p.load_values_from()[1] << std::endl << "Third value = " << p.load_values_from()[2] << "\n" << std::endl;
    p.load_values_to(4,5,6);
    std::cout << "Values after change" << std::endl;
    std::cout << "First value = " << p.load_values_from()[0] << std::endl << "Second value = " << p.load_values_from()[1] << std::endl << "Third value = " << p.load_values_from()[2] << std::endl;
    return 0;
}
