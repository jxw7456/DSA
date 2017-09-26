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
void update(b2World& world)
{
	world.Step(1.0f / 10.0f, 6, 2);
}

// Displays the position of the target and the player
void display(const b2Vec2& target, const b2Vec2& snake)
{
	std::cout << "Target: " << target.x << ", " << target.y << " ---> Snake: " << snake.x << ", " << snake.y << endl;
}

// Reads the key presses and applies the forces to the player to move
// Does NOT move player directly
void applyForces(b2Body* body)
{
	// Check if there is a keypress (kbhit)
	// If there is a key press then call the applyForces function
	if (kbhit)
	{
		char input = _getch();
		switch (input)
		{
		case 'w':
			std::cout << "\n'w' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(0, 100), true);
			break;

		case 'a':
			std::cout << "\n'a' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(-100, 0), true);
			break;

		case 's':
			std::cout << "\n's' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(0, -100), true);
			break;

		case 'd':
			std::cout << "\n'd' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(100, 0), true);
			break;
		}
	}	
}

// Moves the target tot a new location
// Location will be in the range of -5.0 -> 5.0 in X and -5.0 -> 5.0 in Y
void moveTarget(b2Vec2& target, float xPos, float yPos)
{
	target.x = xPos;
	target.y = yPos;
}