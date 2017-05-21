#include <iostream>
#include <string>

class Person{
    private:
    std::string first;
    std::string last;

    public:
    Person(std::string, std::string);
    void set(void);
    void load(void);
};

Person::Person(std::string st, std::string lt){
    first = st;
    last = lt;
}

void Person::set(void){
    std::cout << "Type a first name" << std::endl;
    std::cin >> first;
    std::cout << "Type last name" << std::endl;
    std::cin >> last;
}

void Person::load(void){
    std::cout << "Full name: " << first << " " << last << std::endl;
}

int main(){
    Person p("Mateusz", "Gorczycki");
    std::cout << "Names before change:" << std::endl;
    p.load();
    p.set();
    std::cout << "Names after change:" << std::endl;
    p.load();
    return 0;
}
