// JaJuan Webster
// Gravity Snake
// Professor Maier

#pragma once
#include "Box2D\Box2D.h"

void update(b2World& world);

void display(const b2Vec2& target, const b2Vec2& snake);

void applyForces(b2Body* body);

void moveTarget(b2Vec2& target, float xPos, float yPos);

void processInput();

void ApplyForceUp(b2Body& player);

void ApplyForceDown(b2Body& player);

void ApplyForceLeft(b2Body& player);

void ApplyForceRight(b2Body& player);

void StopMoving(b2Body& player);

void ReverseGravity(b2World& world);

void setupTargets(int cnt);

bool selectNextTraget();