#include <iostream>
#include "samochod.h"

int main()
{
    samochod s1("Andrzej","Kowalski",4000);
    samochod s2(2500);
    samochod s3("Milosz","Cmoch",5000);
    s1.piszDane();
    cout << endl;
    s2.piszDane();
    cout << endl;
    s3.piszDane();
    cout << endl;
    s3.setliczba_drzwi(5);
    cout << "Liczba drzwi: " << s3.getliczba_drzwi() << endl;
    s3.setCena(10000);
    cout << "Cena: " << s3.getCena() << endl;
    cout << endl;
    s3.zmianaimienianazwiska("Kamil", "Slimak");
    s3.piszDane();
    cout<< endl;
    cout<<s1.podatek(10, 1000);
    cout << endl;
    cout<<s2.podatek(25, 5000);
    cout << endl;
    cout<<s3.podatek(20, 2000);
    cout << endl;
    cout << s1;
    cout << endl;
}

