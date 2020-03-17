#include "cCzlowiek.h"
#include "cDwarf.h"
#include "cElf.h"
#include <cstdio>
#include <Windows.h>
#include "Main_theme.h"


void Menu_stuff();

void Menu_interface()
{
	Menu_stuff();

}

void Menu_stuff()
{
	enum Interface
	{
		resume = 1,
		start,
		exit
	};

	short choice{};



	while (choice > exit | choice < resume)
	{

		std::cout << resume << ". Kontynuuj\n";
		std::cout << start << ". Nowa gra\n";
		std::cout << exit << ". exit\n\n";

		std::cout << "Wybieram: ";
		std::cin >> choice;
		

		if (choice > exit | choice < resume | !std::cin >> choice)
		{
			std::cout << "I don't think so :(\n";
			std::cin.clear();
			std::cin.sync();
			std::cin.get();
			Sleep(2000);
			system("cls");
		}
	}

	switch (choice)
	{
	case resume:
		std::cout << "Przykro mi ale nie ma czego kontynuowac :(";
		break;


	case start:
		system("cls");
		Sleep(500);
		std::cout << "No to zaczynamy!" << std::endl;
		break;


	case exit:
		std::cout << "Trzymaj sie!";
		Sleep(1000);
		return;

	}
}

