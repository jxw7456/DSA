// hangman.cpp : Define the body of each function
// JaJuan Webster
// Hangman
// Professor Maier

#include "stdafx.h"
#include "hangman.h"
#include <iostream>

// Attributes
int badGuess = 0;

// Draws ASCII art to the console depending on the number of guesses
void showGallows(int guessLimit)
{
	guessLimit = badGuess;

	// TODO: draw ASCII art properly if guess is wrong.
	if (guessLimit == 0)
	{
		printf("______\n");
		printf("|\n");
		printf("|\n");
		printf("|\n");
		printf("|\n");
		printf("|\n");
	}

	if (guessLimit == 1)
	{
		printf("______\n");
		printf("|   |\n");
		printf("|\n");
		printf("|\n");
		printf("|\n");
		printf("|\n");
		printf("|\n");
	}

	if (guessLimit == 2)
	{
		printf("________\n");
		printf("|   |\n");
		printf("|   O\n");
		printf("|\n");
		printf("|\n");
		printf("|\n");
	}

	if (guessLimit == 3)
	{
		printf("________\n");
		printf("|  |\n");
		printf("|  O\n");
		printf("|  |\n");
		printf("|  |\n");
		printf("|\n");
		printf("|\n");
	}

	if (guessLimit == 4)
	{
		printf("________\n");
		printf("|  |\n");
		printf("|  O\n");
		printf("| /|\n");
		printf("|  |\n");
		printf("|\n");
		printf("|\n");
	}

	if (guessLimit == 5)
	{
		printf("________\n");
		printf("|  |\n");
		printf("|  O\n");
		printf("| /|\\\n");
		printf("|  |\n");
		printf("|\n");
		printf("|\n");
	}

	if (guessLimit == 6)
	{
		printf("________\n");
		printf("|  |\n");
		printf("|  O\n");
		printf("| /|\\\n");
		printf("|  |\n");
		printf("| /\n");
		printf("|\n");
	}

	if (guessLimit == 7)
	{
		printf("________\n");
		printf("|  |\n");
		printf("|  O\n");
		printf("| /|\\\n");
		printf("|  |\n");
		printf("| / \\\n");
		printf("|\n");
	}
}

// store proper guess letters and show the user which letters have been correctly guessed
void showSolved(char word[], char guesses[])
{
	// TODO: store letters into proper char array

	char guess;
	std::cout << "\n\nGuess a letter: ";
	std::cin >> guess;
	std::cout << "Guess: " << guess << "\n\n";
	
	for (int i = 0; i < sizeof(word); i++) 
	{
		if (word[i] == guess && guesses[i] == guess) 
		{
			std::cout << "Guess has already been made. Guess again.\n";
		}

		else if (word[i] == guess) 
		{
			guesses[i] = guess;
		}

		else
		{
			std::cout << guess << " is not in the word. Guess again.\n";
			badGuess += 1;
		}
	}	
}