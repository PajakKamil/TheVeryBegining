#pragma once
#include <iostream>
#include <string>


class cPostac
{
protected:
	unsigned sila{  };
	unsigned zrecznosc{  };
	unsigned zycie{  };
	unsigned charyzma{  };
	std::string nazwa;
	const std::string* rasa;

public:

	cPostac(unsigned _sila, unsigned _zrecznosc, unsigned _zycie, unsigned _charyzma, std::string _nazwa, std::string* _rasa) :
		sila(_sila), zrecznosc(_zrecznosc), zycie(_zycie), charyzma(_charyzma), nazwa(_nazwa), rasa(_rasa)
	{}

	~cPostac()
	{}


	void Drukuj();

	void Info();

};
