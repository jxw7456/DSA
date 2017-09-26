// JaJuan Webster
// Gravity Snake
// Professor Maier

#include "stdafx.h"
#include "snake.h"
#include "Box2D\Box2D.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

// Updates the physics world
void update()
{

}

// Displays the position of the target and the player
void display(b2Vec2 target, b2Vec2 snake)
{
	std::cout << "Target 'X' Position: " << target.x << " Target 'Y' Position: " << target.y << endl;
	std::cout << "Player 'X' Position: " << snake.x << " Player 'Y' Position: " << snake.y << endl;
}

// Reads the key presses and applies the forces to the player to move
// Does NOT move player directly
void applyForces(b2Body* body)
{
	char input = _getch();

	switch (input)
	{
	case 'w':
		std::cout << "\n 'w' is pressed";

		break;

	case 'a':
		std::cout << "\n 'a' is pressed";

		break;

	case 's':
		std::cout << "\n 's' is pressed";

		break;

	case 'd':
		std::cout << "\n 'd' is pressed";

		break;
	}
}

// Moves the target tot a new location
// Location will be in the range of -5.0 -> 5.0 in X and -5.0 -> 5.0 in Y
void moveTarget(float & xPos, float & yPos)
{

}