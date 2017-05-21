#include <iostream>
#include <string>
#include <vector>

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

std::vector<Person> MakeVector(int n){
    return std::vector<Person>(n, Person("Jan", "Kowalski"));
}

int main(){
    std::vector<Person> m = MakeVector(5);
    return 0;
}
