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
	// Define the gravity vector.
	b2Vec2 gravity(0.0f, -10.0f);

	// Construct a world object, which will hold and simulate the rigid bodies.
	b2World world(gravity);

	// Define the ground body.
	b2BodyDef groundBodyDef;
	groundBodyDef.position.Set(0.0f, -10.0f);

	// Call the body factory which allocates memory for the ground body
	// from a pool and creates the ground box shape (also from a pool).
	// The body is also added to the world.
	b2Body* groundBody = world.CreateBody(&groundBodyDef);

	// Define the ground box shape.
	b2PolygonShape groundBox;

	// The extents are the half-widths of the box.
	groundBox.SetAsBox(50.0f, 10.0f);

	// Add the ground fixture to the ground body.
	groundBody->CreateFixture(&groundBox, 0.0f);

	// Define the dynamic body. We set its position and call the body factory.
	b2BodyDef bodyDef;
	bodyDef.type = b2_dynamicBody;
	bodyDef.position.Set(0.0f, 4.0f);
	b2Body* body = world.CreateBody(&bodyDef);

	// Define another box shape for our dynamic body.
	b2PolygonShape dynamicBox;
	dynamicBox.SetAsBox(1.0f, 1.0f);

	// Define the dynamic body fixture.
	b2FixtureDef fixtureDef;
	fixtureDef.shape = &dynamicBox;

	// Set the box density to be non-zero, so it will be dynamic.
	fixtureDef.density = 1.0f;

	// Override the default friction.
	fixtureDef.friction = 0.3f;

	// Add the shape to the body.
	body->CreateFixture(&fixtureDef);

	// Prepare for simulation. Typically we use a time step of 1/60 of a
	// second (60Hz) and 10 iterations. This provides a high quality simulation
	// in most game scenarios.
	float32 timeStep = 1.0f / 60.0f;
	int32 velocityIterations = 6;
	int32 positionIterations = 2;

	// This is our little game loop.
	for (int32 i = 0; i < 60; ++i)
	{
		// Instruct the world to perform a single step of simulation.
		// It is generally best to keep the time step and iterations fixed.
		world.Step(timeStep, velocityIterations, positionIterations);

		// Now print the position and angle of the body.
		b2Vec2 position = body->GetPosition();
		float32 angle = body->GetAngle();

		printf("%4.2f %4.2f %4.2f\n", position.x, position.y, angle);
	}

	//ORIGINAL CODE
	/*
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
	*/
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