#include <iostream>
#include <string>
#include "klient.h"

using namespace std;

klient::klient(string name, string lname, string adr, plec gen) {
    imie = name;
    nazwisko = lname;
    adres = adr;
    piec = gen;
}

void klient::modyfikuj() {
    int temp;
    cout << endl << "wybierz parametr do modyfikacji (1 - imie, 2 - nazwisko, 3 - adres, 4 - plec): ";
    cin >> temp;
    string zm1;
    switch (temp) {
    case 1:
        cout << "podaj nowe imie: ";
        cin >> zm1;
        this->imie = zm1;
        cout << endl;
        break;
    case 2:
        cout << "podaj nowe nazwisko: ";
        cin >> zm1;
        this->nazwisko = zm1;
        cout << endl;
        break;
    case 3:
        cout << "podaj nowy adres: ";
        cin >> zm1;
        this->adres = zm1;
        cout << endl;
        break;
    case 4:
        cout << "1 - m, 2 - k, 3 - x: ";
        cin >> temp;
        if (temp == 1)
            this->piec = mezczyzna;
        else if (temp == 2)
            this->piec = kobieta;
        else
            this->piec = inne;
        cout << endl;
        break;
    default:
        cout << "wybrano nieodpowiednia opcje!" << endl;
        break;
    }
}
