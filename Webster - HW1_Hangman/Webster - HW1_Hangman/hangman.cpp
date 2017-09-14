// hangman.cpp : Define the body of each function
// JaJuan Webster
// Hangman
// Professor Maier

#include "stdafx.h"
#include "hangman.h"
#include <iostream>

// Draws ASCII art to the console depending on the number of guesses
void showGallows(int guessLimit)
{
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
}