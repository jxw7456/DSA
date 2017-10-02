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
			std::cout << "\n'W' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(0, 100), true);
			break;

		case 'a':
			std::cout << "\n'A' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(-100, 0), true);
			break;

		case 's':
			std::cout << "\n'S' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(0, -100), true);
			break;

		case 'd':
			std::cout << "\n'D' is pressed" << endl;
			body->ApplyForceToCenter(b2Vec2(100, 0), true);
			break;
		default:
			std::cout << "\nDon't forget the gravity!" << endl;
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

void processInput()
{
}

// Move Player Up 'W'
void ApplyForceUp(b2Body& player)
{
	player.ApplyForceToCenter(b2Vec2(0, 100), true);
}

// Move Player Down 'S'
void ApplyForceDown(b2Body& player)
{
	player.ApplyForceToCenter(b2Vec2(0, -100), true);
}

// Move Player Left 'A'
void ApplyForceLeft(b2Body& player)
{
	player.ApplyForceToCenter(b2Vec2(-100, 0), true);
}

// Move Player Right 'D'
void ApplyForceRight(b2Body& player)
{
	player.ApplyForceToCenter(b2Vec2(100, 0), true);
}


void StopMoving(b2Body& player)
{
	player.SetLinearVelocity(b2Vec2(0, 0));
}

void ReverseGravity(b2World& world)
{
	world.SetGravity(b2Vec2(0, 1));
}

void setupTargets(int cnt)
{
}

bool selectNextTraget()
{
	return false;
}
