// hangman.cpp : Define the body of each function
// JaJuan Webster
// Hangman
// Professor Maier

#include "stdafx.h"
#include "hangman.h"
#include <iostream>

// Attributes
int badGuess = 0;
char guess;
char correctWord[] = "clout";

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
	std::cout << "\n\nGuess a letter: ";
	std::cin >> guess;

	for (int i = 0; i < sizeof(correctWord); i++)
	{
		if (correctWord[i] == guess)
		{
			if (word[i] == guess)
			{
				std::cout << "\n'" << guess << "' guess has already been made. Guess again.\n";
			}

			else
			{
				word[i] = guess;
			}
			break;
		}

		if (i == (sizeof(correctWord) - 1) && correctWord[i] != guess)
		{
			if (guesses[badGuess] == guess || guesses[badGuess - 1] == guess || guesses[badGuess - 2] == guess || guesses[badGuess - 3] == guess || guesses[badGuess - 4] == guess || guesses[badGuess - 5] == guess)
			{
				std::cout << "\n'" << guess << "' guess has already been made. Guess again.\n";
			}

			else
			{
				guesses[badGuess] = guess;
				std::cout << "\n" << guess << " is not in the word. Guess again.\n";
				badGuess += 1;
			}
		}
	}
}