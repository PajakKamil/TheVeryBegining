#pragma once
#include "cPostac.h"
class cElf :
	public cPostac
{
private:
	int zrecznosc_bon{ 3 };
	std::string rasa = "Elf";

	void Racjal_Elf();


public:
	cElf(int _zrecznosc_bon = 3) :
		zrecznosc_bon(_zrecznosc_bon),
		cPostac(10, 10, 150, 10, "Barbarosa", &rasa)
	{
		Racjal_Elf();
		cPostac::Drukuj();
		cPostac::Info();
	}
	~cElf()
	{
	}
};
