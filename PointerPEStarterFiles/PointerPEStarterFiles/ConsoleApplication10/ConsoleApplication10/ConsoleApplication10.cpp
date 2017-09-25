// ConsoleApplication10.cpp : Defines the entry point for the console application.
// JaJuan Webster
// Pointer PE
// Professor Maier

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

class MovableObject
{
public:
	int xPos;
	int yPos;
	void PrintPos()
	{
		cout << "X:" << xPos << " Y:" << yPos << endl;
	}
};

class Player : public MovableObject
{
public:
	char* name;
	Player()
	{
		cout << "player ctor" << endl;
		name = new char[15];
	}

	~Player()
	{
		cout << "player dtor" << endl;
		delete[] name;
	}
};

class Monster : public MovableObject
{
public:
	int damage;
};

int main()
{
	// Since player is being created from the base class, it no longer will print
	// out destructor from the Player class.
	//Monster *boss = new Monster();
	//Player *pOne = new Player();
	MovableObject *boss = new Monster();
	MovableObject *pOne = new Player();
	Monster *fakeMonster = (Monster*)pOne;

	// add code here
	printf("Address of the boss is %p\n", (void *)boss);
	printf("Address of the player is %p\n", (void *)pOne);
	printf("Address of the fake monster is %p\n\n", (void *)fakeMonster);

	// new boss positions
	boss->xPos = 52;
	boss->yPos = 37;

	// new player positions
	pOne->xPos = 100;
	pOne->yPos = 17;

	// new fake monster
	fakeMonster->xPos = 46;
	fakeMonster->yPos = 82;

	// print out positions
	boss->PrintPos();
	pOne->PrintPos();
	fakeMonster->PrintPos();

	// The program was crashing in the debug because the program is deleting
	// player twice. Since fakeMonster is pointing to pOne, once pOne is
	// deleted, it has nothing else to look at. Once pOne is deleted,
	// fakeMonster should be null.
	delete boss;
	delete pOne;
	//delete fakeMonster; The CULPRIT
	fakeMonster = nullptr;
	
	// Birthday output
	cout << "\nJaJuan, your birthday is in 140 day(s)" << endl;

	_getch();
    return 0;
}

