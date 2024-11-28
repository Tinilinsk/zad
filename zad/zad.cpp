#include <iostream>
#include <vector>
#include "Pojazd.h"
#include "Samochod.h"
#include "Motocykl.h"
#include <fstream>

int main()
{
    Pojazd* p1 = new Samochod("Mazda", 1991, 4);
    Pojazd* p2 = new Samochod("Opel", 2002, 2);
    Pojazd* p3 = new Motocykl("Yamaha", 1996, true);
    Pojazd* p4 = new Motocykl("Yamaha", 2014, false);

    std::vector<Pojazd*> pojazd;
    pojazd.push_back(p1);
    pojazd.push_back(p2);
    pojazd.push_back(p3);
    pojazd.push_back(p4);

    for (auto& p : pojazd) {
        p->wyswietlInformacje();
    }

    std::ofstream plik("pojazdy.txt");
    if (plik.is_open()) {
        for (auto& p : pojazd) {
            p->zapiszDoPliku(plik);
        }
        plik.close();
        std::cout << "Dane zapisano do pliku 'pojazdy.txt'." << std::endl;
    }
    else {
        std::cout << "Nie można otworzyć pliku do zapisu!" << std::endl;
    }

    for (auto& p : pojazd) {
        delete p;
    }

    return 0;
}
