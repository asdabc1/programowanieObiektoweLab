#include "klient.h"

using namespace std;

fstream klient::plik;

klient::klient(string name, string lname, string adr, plec gen) {
	imie = name;
	nazwisko = lname;
	adres = adr;
	piec = gen;
}

void klient::modyfikuj() {
	int temp;
	cout << endl << "wybierz parametr do modyfikacji (1 - imie, 2 - nazwisko, 3 - adres, 4 - plec): ";
	cin >> temp;
	string zm1;
	switch (temp) {
	case 1:
		cout << "podaj nowe imie: ";
		cin >> zm1;
		this->imie = zm1;
		cout << endl;
		break;
	case 2:
		cout << "podaj nowe nazwisko: ";
		cin >> zm1;
		this->nazwisko = zm1;
		cout << endl;
		break;
	case 3:
		cout << "podaj nowy adres: ";
		cin >> zm1;
		this->adres = zm1;
		cout << endl;
		break;
	case 4:
		cout << "1 - m, 2 - k, 3 - x: ";
		cin >> temp;
		if (temp == 1)
			this->piec = mezczyzna;
		else if (temp == 2)
			this->piec = kobieta;
		else
			this->piec = inne;
		cout << endl;
		break;
	default:
		cout << "wybrano nieodpowiednia opcje!" << endl;
		break;
	}
}

void klient::zapisz(vector<klient> lista) {
	plik.open("C:\\Users\\Adam\\Desktop\\plikiprojektowe\\klienci.txt", ios::out);
	for (klient x : lista) {
		plik << x.imie << " " << x.nazwisko << " " << x.adres << " " << x.piec << endl;
		for (int y : x.listaZamowien)
			plik << "%" << y << endl;
	}
}

int czytajID(string wyrazenie) {
	string wynik;
	for (int i = 1; i < size(wyrazenie); i++)
		wynik += wyrazenie[i];
	int ret = stoi(wynik);
	return ret;
}

void klient::wczytaj(vector<klient> lista) {
	plik.open("C:\\Users\\Adam\\Desktop\\plikiprojektowe\\klienci.txt", ios::in);
	string t, name, lname, adr, gen;
	stringstream linia;
	while (getline(plik, t)) {
		if (t[0] != '%') {
			linia << t;
			linia >> name;
			linia >> lname;
			linia >> adr;
			linia >> gen;
			plec z;
			if (gen == "mezczyzna")
				z = mezczyzna;
			else if (gen == "kobieta")
				z = kobieta;
			else
				z = inne;
			klient a(name, lname, adr, z);
			lista.push_back(a);
		}
		else {
			lista.end()->listaZamowien.push_back(czytajID(t));
		}
	}
}