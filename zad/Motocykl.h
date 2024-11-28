#pragma once
#include "Pojazd.h"

class Motocykl : public Pojazd
{
private:
	bool _maKufry;
public:
	Motocykl(const std::string marka, const int rokProdukcji, bool maKufry);
	void wyswietlInformacje() override;
	~Motocykl();
	void zapiszDoPliku(std::ofstream& plik) const override;
};