#ifndef ZAMOWIENIE_H
#define ZAMOWIENIE_H
#include <string>
#include <ctime>
#include "przedmioty.h"

enum sposobyPlatnosci { gotowka, karta, raty, blik };

class zamowienie
{
private:
    std::string data;
    float wartoscCalkowita;
    sposobyPlatnosci sp;
    przedmioty* tab;
    int ID;
public:
    zamowienie(std::string date, float sum, sposobyPlatnosci payment, przedmioty* lista);
    void edytuj();
};

#endif // ZAMOWIENIE_H
