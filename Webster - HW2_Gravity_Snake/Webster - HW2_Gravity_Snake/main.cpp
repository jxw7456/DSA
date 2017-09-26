// Webster - HW2_Gravity_Snake.cpp : Defines the entry point for the console application.
// JaJuan Webster
// Gravity Snake
// Professor Maier

#include "stdafx.h"
#include "snake.h"
#include "Box2D\Box2D.h"
#include <iostream>
#include <string>
#include <crtdbg.h>
#include <conio.h>
using namespace std;

int hits = 0;

// Introduce the game to the user with instructions as to the keys to press
int main(int argc, char** argv)
{

	B2_NOT_USED(argc);
	B2_NOT_USED(argv);

	std::cout << "Welcome to Gravity Snake!\n" << endl;
	
	//ORIGINAL CODE
	// Create the physics world (b2world)
	b2Vec2 gravity(0.0f, -10.f);	// define the gravity vector
	b2World world(gravity);
		
	// Create your snake (physics body b2body)
	b2BodyDef bodyDef;
	bodyDef.type = b2_dynamicBody;	// responds to forces
	bodyDef.position.Set(0.0f, 4.0f);
	b2Body* snake = world.CreateBody(&bodyDef);

	b2PolygonShape snakeBox;
	snakeBox.SetAsBox(1.0f, 1.0f);

	b2FixtureDef fixtureDef;
	fixtureDef.shape = &snakeBox;
	fixtureDef.density = 1.0f;
	fixtureDef.friction = 0.3f;

	snake->CreateFixture(&fixtureDef);

	// Create a while loop to keep running until the user hits ESC or you get the total number of targets
	/*
	while (kbhit() != 'ESC' || hits < 2) {
		// Check if there is a keypress (kbhit)
		// If there is a key press then call the applyForces function
		if (kbhit() == pressed) {
			applyForces();
		}
	}
	*/	

	// The physics world will update the snake based on gravity and the other forces automatically

	// BONUS
	// Loop the game where you can do 10 targets instead of just twice.
	_getch();
    return 0;
}