#ifndef KLIENT_H
#define KLIENT_H
#include <string>
#include <vector>
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
public:
    klient(std::string, std::string, std::string, plec);
    void modyfikuj();
};

#endif // KLIENT_H
