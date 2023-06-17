#ifndef ZAMOWIENIE_H
#define ZAMOWIENIE_H
#include <string>
#include <ctime>
#include <vector>
#include "przedmioty.h"

enum sposobyPlatnosci { gotowka, karta, raty, blik };

class zamowienie {
private:
    std::string data;
    float wartoscCalkowita;
    sposobyPlatnosci sp;
    vector<przedmioty> tab;
    int ID;
public:
    zamowienie(std::string date, float sum, sposobyPlatnosci payment, vector<przedmioty> lista);
    void edytuj();
    int zwrocID();
    void zapisz(fstream);
};

#endif // ZAMOWIENIE_H
