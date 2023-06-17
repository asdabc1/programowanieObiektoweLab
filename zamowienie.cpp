#include <iostream>
#include "zamowienie.h"

using namespace std;

zamowienie::zamowienie(string date, float sum, sposobyPlatnosci payment, przedmioty* lista)
{
    data = date;
    wartoscCalkowita = sum;
    sp = payment;
    tab = lista;
    ID = time(NULL);
}

void zamowienie::edytuj() {
    cout << "wybierz element zamowienia do edycji:" << endl
        << "1 - sposob platnosci" << endl
        << "2 - produkty" << endl;
    int temp;
    cin >> temp;
    switch (temp) {
    case 1:
        cout << endl << "wybierz metode platnosci (1 - gotowka, 2 - karta, 3 - raty, 4 - blik): ";
        cin >> temp;
        switch (temp) {
        case 1:
            this->sp = gotowka;
            break;
        case 2:
            this->sp = karta;
            break;
        case 3:
            this->sp = raty;
            break;
        case 4:
            this->sp = blik;
            break;
        }
        break;
    case 2:
        for (przedmioty* x : tab)
    }
}
