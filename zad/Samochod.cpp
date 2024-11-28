#include "Samochod.h"

Samochod::Samochod(const std::string marka, const int rokProdukcji, int liczbaDrzwi): Pojazd(marka, rokProdukcji)
{
	_liczbaDrzwi = liczbaDrzwi;
}

void Samochod::wyswietlInformacje()
{
	std::cout << "Marka: " << _marka << " Rok produkcji: " << _rokProdukcji << " Liczba drzwi: " << _liczbaDrzwi << "\n";
}

Samochod::~Samochod()
{
	std::cout << "Dekonstruktor klasy Samochod" << "\n";
}

void Samochod::zapiszDoPliku(std::ofstream& plik) const
{
	plik << "Typ: Samochod, Marka: " << _marka << ", Rok: " << _rokProdukcji << ", Liczba drzwi: " << _liczbaDrzwi << "\n";
}
