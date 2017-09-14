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
	char wordToBeGuessed[] = "clout";
	char correctlyGuessedLettters[] = "_____";
	char incorrectlyGuessedLetters[27] = "";
	char guess;

	std::cout << "----------------------Welcome to the HANGMAN!----------  ----------" << endl;
	std::cout << "Your word has FIVE letters." << endl;	

	// Loop
	while (true)
	{
		std::cout << "\n\nGuess a letter: ";
		std::cin >> guess;
		std::cout << "Guess: " << guess << "\n";

		//showSolved(word, guesses);
		// LAST PART needed to finish game

		showGallows(strlen(incorrectlyGuessedLetters));
	}

	std::cout << "\nPress any key to continue...";
	std::cin.ignore();
	std::cin.get();
	return 0;
}