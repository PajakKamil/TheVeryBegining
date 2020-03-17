#pragma once
#include "cPostac.h"
class cDwarf :
	public cPostac
{
private:
	int sila_bon{ 3 };
	std::string rasa = "Krasnolod";

	void Racjal_dwarf();


public:
	cDwarf(int _sila_bon = 3) :
		sila_bon(_sila_bon),
		cPostac(10, 10, 150, 10, "Barbarosa", &rasa)
	{
		Racjal_dwarf();
		cPostac::Drukuj();
		cPostac::Info();
	}
	~cDwarf()
	{
	}
};

