#include <iostream>
#include <string>

class Osoba{
    private:
        std::string imie;
        std::string nazwisko;

    public:
        Osoba(std::string im, std::string naz){
            imie = im;
            nazwisko = naz;
        }

        void input(){
            std::string im;
            std::string naz;
            std::cout << "Give a first name: " << std::endl;
            std::cin >> im;
            std::cout << "Give a second name: " << std::endl;
            std::cin >> naz;
            imie = im;
            nazwisko = naz;
        }

        void returnz(){
            std::cout << imie << std::endl;
            std::cout << nazwisko << std::endl;
        }
};


int main(){
    Osoba os("Mateusz", "Gorczycki");
    std::cout << "Names before change:" << std::endl;
    os.returnz();
    os.input();
    std::cout << "Names after change:" << std::endl;
    os.returnz();
    return 0;
}
