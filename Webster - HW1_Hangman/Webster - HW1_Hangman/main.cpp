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
	string wordToBeGuessed = "RIDICULOUSNESS";
	string correctlyGuessedLettters;
	string incorrectlyGuessedLetters;
	string letter;
	char word[15] = "RIDICULOUSNESS";
	char guesses[15];
	cout << "----------------------Hello! Welcome to the HANGMAN game!----------  ----------" << endl;

	showGallows(15);
	showSolved(word, guesses);

	cout << "Guess a letter: ";
	cin >> letter;

	for (int i = 0; i < 15; i++)
	{
		if (letter == word[i])
		{

		}
	}

    return 0;
}

