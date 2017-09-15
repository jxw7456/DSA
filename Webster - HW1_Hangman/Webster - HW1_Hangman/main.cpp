// main.cpp : Defines the entry point for the console application.
// JaJuan Webster
// Hangman
// Professor Maier

#include "stdafx.h"
#include "hangman.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Attributes
	char wordToBeGuessed[] = "clout";
	char correctlyGuessedLettters[] = "_____";
	char incorrectlyGuessedLetters[27] = "";

	std::cout << "----------------------Welcome to the HANGMAN!----------------------" << endl;
	std::cout << "Your word has FIVE letters." << endl;

	// Loop
	while (true)
	{
		showSolved(wordToBeGuessed, correctlyGuessedLettters);

		showGallows(strlen(incorrectlyGuessedLetters));

		std::cout << "\nWord: " << correctlyGuessedLettters << "\n";

		// Win
		if (strcmp(wordToBeGuessed, correctlyGuessedLettters) == 0)
		{
			std::cout << "\n\nYou Win!\n";
			break;
		}

		// Ran out of guesses
		if (strlen(incorrectlyGuessedLetters) > 6)
		{
			std::cout << "\n\nYou ran out of guesses. The word was " << wordToBeGuessed << ".\n";
			break;
		}
	}

	// Exit Program
	std::cin.ignore();
	std::cin.get();
	return 0;
}