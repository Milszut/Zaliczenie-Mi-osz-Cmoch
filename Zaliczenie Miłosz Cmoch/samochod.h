#include <iostream>
#pragma once

using namespace std;

class samochod
{
private:
	int liczba_drzwi;
	int cena;
	string imie;
	string nazwisko;
public:
	samochod(string imie, string nazwisko, int cena);
	samochod(int cena);
	samochod();
	~samochod();

	void setCena(int cena);
	int getCena();
	void setliczba_drzwi(int liczba_drzwi);
	int getliczba_drzwi();

	void zmianaimienianazwiska(string imie, string nazwisko);
	double podatek(double procent, double wartosc_rynkowa);
	friend ostream& operator<<(ostream& out, samochod& s);

	void piszDane();
};

