#pragma once

#include "Pojazd.h"

class Samochod : public Pojazd
{
private:
	int _liczbaDrzwi;
public:
	Samochod(const std::string marka, const int rokProdukcji, int liczbaDrzwi);
	void wyswietlInformacje() override;
	~Samochod();
	void zapiszDoPliku(std::ofstream& plik) const override;
};