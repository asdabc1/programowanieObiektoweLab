#include "przedmioty.h"

using namespace std;

przedmioty::przedmioty(string name, float price, float taxRate, int amount)
{
    nazwa = name;
    cena = price;
    stawkaVAT = taxRate;
    ilosc = amount;
}
