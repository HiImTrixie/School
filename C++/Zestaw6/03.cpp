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

class array_person{
    private:
    Person ** array;
    int size;
    public:
    array_person(int, std::string, std::string);
    ~array_person(void);
    Person& at(int);
};

array_person::array_person(int n, std::string st, std::string lt){
    array = new Person*[n];
    size = n;
    for(int i=0; i < n; i++){
        array[i] = new Person(st, lt);
    }
}

array_person::~array_person(void){
    delete [] array;
}

Person& array_person::at(int i){
    return *array[i];
}

int main(){
    array_person arr(5, "Mateusz", "Gorczycki");
    Person p = arr.at(2);
    p.load();
    return 0;
}
