#ifndef KLIENT_H
#define KLIENT_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "zamowienie.h"

enum plec { inne, mezczyzna, kobieta };

class klient
{
private:
    std::string imie;
    std::string nazwisko;
    std::string adres;
    plec piec;
    std::vector<zamowienie> listaZamowien;
    std::string login;
    std::string haslo;
public:
    klient(std::string, std::string, std::string, plec);
    void modyfikuj();
    void zapisz(fstream);
};

#endif // KLIENT_H
