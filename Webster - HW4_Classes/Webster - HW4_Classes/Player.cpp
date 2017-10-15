#include "stdafx.h"
#include "Player.h"
#include <iostream>
using namespace std;


Player::Player()
{
	playerName = "Unknown";
	strength = 10;
	dexterity = 10;
	finesse = 10;
}

Player::Player(char * playerName, int strength, int dexterity, int finesse)
{
	playerName = playerName;
	strength = strength;
	dexterity = dexterity;
	finesse = finesse;
}

Player::~Player()
{
}

void Player::printPlayer()
{
	std::cout << "Player Name: " << playerName << endl;
	std::cout << "Strength: " << strength << endl;
	std::cout << "Dexterity: " << dexterity << endl;
	std::cout << "Finesse: " << finesse << "\n" << endl;
}
