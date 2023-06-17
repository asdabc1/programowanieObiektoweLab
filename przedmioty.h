#ifndef PRZEDMIOTY_H
#define PRZEDMIOTY_H
#include <string>
#include <fstream>

class przedmioty {
private:
    float stawkaVAT;
    int ilosc;
    std::string nazwa;
    float cena;
public:
    przedmioty(std::string name, float price, float taxRate, int amount);
    void zapisz(fstream);
    float zwrocVAT();
    int zwrocIlosc();
    std::string zwrocNazwe();
    float zwrocCene();
};

#endif // PRZEDMIOTY_H
