// Webster - Number Guessing Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	// Attributes
	int num, guess = 0;
	int tries = 1;
	char answer;

	// Get the current time, cast to unsigned int and seed RNG
	srand((unsigned int)time(0));

	// Number in between 1-100
	num = rand() % 99 + 2;

	// Nested loops: one that loops while they still want to play, and
	// another that loops while they're guessing
	while (true)
	{
		// Playing the Guessing Game
		while (true)
		{			
			std::cout << "#" << tries << " Enter your guess (1-100): ";
			std::cin >> guess;

			if (guess < 1 || guess > 100) 
			{
				std::cout << "Error: " << guess << " is outside of the range 1-100\n\n";
			}

			else if (guess > num)
			{
				cout << "Your guess was too high.\n\n";
				tries++;
			}

			else if (guess < num)
			{
				cout << "Your guess was too low.\n\n";
				tries++;
			}

			else
			{
				cout << "Correct! It took you " << tries << " guesses.\n\n";
				break;
			}
			
			if (tries > 8) 
			{
				std::cout << "You ran out of tries! The number was " << num << "\n\n";
				break;
			}
		}
	}

	std::cin.ignore();
	return 0;
}

