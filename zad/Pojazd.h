#pragma once

#include <string>
#include <iostream>
#include <fstream>

class Pojazd
{
protected:
	std::string _marka;
	int _rokProdukcji;
public:
	Pojazd(const std::string marka, const int rokProdukcji);
	virtual void wyswietlInformacje();
	virtual ~Pojazd();
	virtual void zapiszDoPliku(std::ofstream& plik) const = 0;
};