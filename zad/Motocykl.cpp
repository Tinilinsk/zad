#include "Motocykl.h"

Motocykl::Motocykl(const std::string marka, const int rokProdukcji, bool maKufry) : Pojazd(marka, rokProdukcji)
{
	_maKufry = maKufry;
}

void Motocykl::wyswietlInformacje()
{
	std::cout << "Marka: " << _marka << " Rok produkcji: " << _rokProdukcji << " Kufry: " << _maKufry << "\n";
}

Motocykl::~Motocykl()
{
	std::cout << "Dekonstruktor klasy Motocykl" << "\n";
}

void Motocykl::zapiszDoPliku(std::ofstream& plik) const
{
    plik << "Typ: Samochod, Marka: " << _marka << ", Rok: " << _rokProdukcji << ", Kufry: " << _maKufry << "\n";
}