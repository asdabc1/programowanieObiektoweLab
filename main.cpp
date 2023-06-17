#include <iostream>
#include "head.h"

using namespace std;

klient* nowyKlient();

int main() {
    vector<klient> listaKlientow;
    vector<przedmioty> listaPrzedmiotow;
    fstream fileZamowienie;
    fileZamowienie.open("zamowienia.txt");
    fstream filePrzedmioty;
    filePrzedmioty.open("przedmioty.txt");
    std::fstream fileKlienci;
    fileKlienci.open("klienci.txt");
    return 0;
}

klient* nowyKlient() {
    string imie;
    string nazwisko;
    string adres;
    plec pl;
    int temp;
    cout << "podaj imie: ";
    cin >> imie;
    cout << endl << "podaj nazwisko: ";
    cin >> nazwisko;
    cout << endl << "podaj adres: ";
    cin >> adres;
    cout << endl << "wybierz plec (1 - m, 2 - k, 3 - x): ";
    cin >> temp;
    if (temp == 1)
        pl = mezczyzna;
    else if (temp == 2)
        pl = kobieta;
    else
        pl = inne;
    klient* nowy = new klient(imie, nazwisko, adres, pl);
    return nowy;
}

