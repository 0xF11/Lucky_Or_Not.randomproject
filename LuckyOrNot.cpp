#include <iostream>
#include <typeinfo>
#include <random>
#include <string>
#include "PlaceHolderHeaderName.h"
void ErrorHandling(); // defined in Functions.h
void ErrorHandler(); // defined in Functions.h



std::random_device RDevice{};
std::seed_seq Seed{ (RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice(), RDevice()) }; // 12 seeds
std::mt19937 Rng{ Seed };

std::uniform_int_distribution OneToOneHundred(1, 100);

int LuckyOrNot{ OneToOneHundred(Rng) };
#include <Windows.h>
int main()
{

	int LuckyOrNot{ OneToOneHundred(Rng) };
	std::cout << LuckyOrNot;
	std::cout << "Hello! This app will determine if it is your lucky day or not!\n";
	std::cout << "User, Whoever you are, Please enter your name!: ";
	std::string UserName;
	std::getline(std::cin >> std::ws, UserName);
	ErrorHandler();
	std::cout << "Awesome! Are you ready to figure out if its your lucky day or not?!!? Y/N: ";

		char YorN;
		std::cin >> YorN;
		ErrorHandler();
		switch (YorN)
		{
		case 'y':
			std::cout << "\n----------------------------------------------------------\nAwesome! Please wait while we calculate if its your lucky day or not!\n";
			Sleep(750);
			system("cls"); // clear console
			for (int i{ 0 }; i < 9; i++)
			{
				std::cout << "Calculating...\n";
				Sleep(1000);

			}



			if (LuckyOrNot < 50)
			{
				std::cout << "Dont do anything dangerous... It is not your lucky day!\n";
			}
			else
			{
				std::cout << "Congrats! " << UserName << " Its your lucky day!\n";
				std::cout << "Feel free to do anything you want (Since its your lucky day and all!)\n";
			}
			break;
		case 'Y':
			std::cout << "\n----------------------------------------------------------\nAwesome! Please wait while we calculate if its your lucky day or not!\n";
			Sleep(750);
			system("cls"); // clear console
			for (int i{ 0 }; i <= 9; i++)
			{
				std::cout << "Calculating...\n";
				Sleep(1000);

			}
			if (LuckyOrNot < 50)
			{
				system("cls");
				std::cout << "Dont do anything dangerous... It is not your lucky day!\n";
			}
			else
			{

				system("cls");
				std::cout << "Congrats! " << UserName << " Its your lucky day!\n";
				std::cout << "Feel free to do anything you want (Since its your lucky day and all!)\n";
			}
			break;
		case 'n':
			system("cls");
			Sleep(10);
			std::cout << "Cool, Guess you'll never know then, Asshole.\n";
			Sleep(450);
			goto NoSayer;
		case 'N':
			system("cls");
			Sleep(10);
			std::cout << "Cool, Guess you'll never know then, Asshole.\n";
			Sleep(450);
			goto NoSayer;

		


		}

		Sleep(5000);
		std::cout << '\n';
		int NoSayer;
		NoSayer:
		return 0;

}

