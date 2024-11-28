#include "Pojazd.h"

Pojazd::Pojazd(const std::string marka, const int rokProdukcji): _marka(marka), _rokProdukcji(rokProdukcji)
{
}

void Pojazd::wyswietlInformacje()
{
	std::cout << "Marka: " << _marka << " Rok produkcji: " << _rokProdukcji << "\n";
}

Pojazd::~Pojazd()
{
	std::cout << "Dekonstruktor klasy Pojazd" << "\n";
}
