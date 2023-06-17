#include "przedmioty.h"

using namespace std;

przedmioty::przedmioty(string name, float price, float taxRate, int amount)
{
    nazwa = name;
    cena = price;
    stawkaVAT = taxRate;
    ilosc = amount;
}

void przedmioty::zapisz(fstream plik) {
    plik << nazwa << " " << ilosc << " " << cena << " " << stawkaVAT << endl;
}

float przedmioty::zwrocCene() {
    return cena;
}

int przedmioty::zwrocIlosc() {
    return ilosc;
}

float przedmioty::zwrocVAT() {
    return stawkaVAT;
}

string przedmioty::zwrocNazwe() {
    return nazwa;
}