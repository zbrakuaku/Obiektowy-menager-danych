#include <iostream>

using namespace std;

class Dane{
public:
    void pobierzDane(string name, string surname, int age);
    void wyswietlDane();
private:
    string imie, nazwisko;
    int wiek;
};

void Dane::pobierzDane(string name, string surname, int age){
    imie = name;
    nazwisko = surname;
    wiek = age;
}

void Dane::wyswietlDane(){
    cout << imie << " " << nazwisko << " " << wiek;
}

int main()
{
    Dane dane1;
    dane1.pobierzDane("Jan","Kowalski",67);
    dane1.wyswietlDane();
    return 0;
}
