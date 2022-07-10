#include <iostream>
#include "samochod.h"

using namespace std;

samochod::samochod(string imie, string nazwisko, int cena)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->cena = cena;
	this->liczba_drzwi = 4;
}

samochod::samochod(int cena)
{
	this->imie = "";
	this->nazwisko = "";
	this->cena = cena;
	this->liczba_drzwi = 4;
}

samochod::samochod()
{
	imie = "";
	nazwisko = "";
	cena = 0;
	liczba_drzwi = 0;
}

samochod::~samochod()
{
}

void samochod::setCena(int cena)
{
	this->cena = cena;
}

int samochod::getCena()
{
	return cena;
}

void samochod::setliczba_drzwi(int liczba_drzwi)
{
	this->liczba_drzwi = liczba_drzwi;
}

int samochod::getliczba_drzwi()
{
	return liczba_drzwi;
}

void samochod::zmianaimienianazwiska(string imie, string nazwisko)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
}

double samochod::podatek(double procent, double wartosc_rynkowa)
{
	return (wartosc_rynkowa * (procent / 100));
}

void samochod::piszDane()
{
	cout << "Imie: ";
	cout << imie << endl;
	cout << "Nazwisko: ";
	cout << nazwisko << endl;
	cout << "Cena: ";
	cout << cena << endl;
	cout << "Liczba drzwi: ";
	cout << liczba_drzwi << endl;
}

ostream& operator<<(ostream& out, samochod& s)
{
	cout << "Imie: ";
	out << s.imie << endl;
	cout << "Nazwisko: ";
	out << s.nazwisko << endl;
	cout << "Cena: ";
	out << s.cena << endl;
	cout << "Liczba drzwi: ";
	out << s.liczba_drzwi << endl;

		return out;
}
