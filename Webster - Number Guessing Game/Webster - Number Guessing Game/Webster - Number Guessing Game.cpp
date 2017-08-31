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
	int num, guess, tries = 0;
	bool play = true;

	// Get the current time, cast to unsigned int and seed RNG
	srand((unsigned int)time(0));

	num = rand() % 100 + 1;

	// Nested loops: one that loops while they still want to play, and
	// another that loops while they're guessing
	while (play) 
	{
		do 
		{
			cout << "Enter your guess (1-100): ";
			
			cin >> guess;
			
			tries++;

			if (guess > num) 
			{
				cout << "Your guess was too high.\n";
			}

			else if (guess < num) 
			{
				cout << "Your guess was too low.\n";
			}

			else 
			{
				cout << "Correct! It took you " << tries << " guesses.\n";
			}
		} while (guess != num);

		cout << "Would you like to play again? (Y/N): ";

		cin >> 
	}

    return 0;
}

