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

	std::cout << "----------------------Welcome to the HANGMAN!----------  ----------" << endl;
	std::cout << "Your word has FIVE letters." << endl;

	showGallows(strlen(incorrectlyGuessedLetters));
	//showSolved(word, guesses);

	std::cout << "\n\nGuess a letter: ";

	/*
	for (int i = 0; i < 15; i++)
	{

	}
	*/

	return 0;
}