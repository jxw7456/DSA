// main.cpp : Defines the entry point for the console application.
// JaJuan Webster
// Hangman
// Professor Maier

#include "stdafx.h"
#include "hangman.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char wordToBeGuessed[] = "clout";
	char correctlyGuessedLettters[] = "_____";
	char incorrectlyGuessedLetters[27] = "";

	std::cout << "----------------------Welcome to the HANGMAN!----------  ----------" << endl;

	//showGallows(15);
	//showSolved(word, guesses);

	std::cout << "Guess a letter: ";

	/*
	for (int i = 0; i < 15; i++)
	{

	}
	*/

	return 0;
}