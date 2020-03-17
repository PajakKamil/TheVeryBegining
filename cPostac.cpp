#include "cPostac.h"

void cPostac::Drukuj()
{
	std::cout << "Sila: " << sila << std::endl;
	std::cout << "Zrecznosc: " << zrecznosc << std::endl;
	std::cout << "Zycie: " << zycie << std::endl;
	std::cout << "Charyzma: " << charyzma << std::endl;
	std::cout << "Imie: " << nazwa << std::endl;
	std::cout << "Rasa: " << *rasa << std::endl << std::endl;
}

void cPostac::Info()
{
	if (*rasa == "Krasnolod")
	{
		std::cout << "Taki maly co se biega ale jak uderzy to nie ma co zbierac\n";
		std::cout << "Cecha rasowa: +3 do sily" << std::endl << std::endl;
	}
	else if (*rasa == "Czlowiek")
	{
		std::cout << "Taki sam jak ty, ludzie stanowia wiekszosc populacji\n";
		std::cout << "Cecha rasowa: +3 do charyzmy" << std::endl;
	}
	else if (*rasa == "Elf")
	{
		std::cout << "Koles ma spiczaste uszy\n";
		std::cout << "Cecha rasowa: +3 do zrecznosci" << std::endl << std::endl;
	}
}