#ifndef PRZEDMIOTY_H
#define PRZEDMIOTY_H
#include <string>


class przedmioty
{
private:
    std::string nazwa;
    float cena;
    float stawkaVAT;
    int ilosc;
public:
    przedmioty(std::string name, float price, float taxRate, int amount);
};

#endif // PRZEDMIOTY_H
