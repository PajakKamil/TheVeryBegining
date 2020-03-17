#pragma once
#include "cPostac.h"
class cCzlowiek :
	public cPostac
{
private:
	int charyzma_bon;
	std::string rasa = "Czlowiek";

	void Racjal_czlowiek();
	

public:
	cCzlowiek(int _charyzma_bon = 3) :
		charyzma_bon(_charyzma_bon),
		cPostac(10, 10, 150, 10, "Poncjusz", &rasa)
	{
		Racjal_czlowiek();
		cPostac::Drukuj();
		cPostac::Info();

	}
	~cCzlowiek()
	{
	}
};

