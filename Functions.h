#pragma once
#include <iostream>
#include <limits>


void ErrorHandling()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
#include <Windows.h>
void ErrorHandler()
{
	if (!std::cin)
	{
		if (std::cin.eof())
		{
			std::cout << "Something broke! Sorry, Try restarting the program.\n";
			Sleep(600);
			exit(0);
		}

		std::cin.clear();
		ErrorHandling();

	}
}
