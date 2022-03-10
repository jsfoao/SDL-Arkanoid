#include "ECS.h"
#include <iostream>
#include "../Engine.h"

Entity::Entity(){}

Entity::~Entity() {}

void Entity::destroy()
{
	active = false;
}

void Entity::start()
{
	for (Component* c : components)
	{
		c->start();
	}
}

void Entity::update()
{
	if (!active) { return; }

	for (Component* c : components)
	{
		c->update();
	}
}

void Entity::render()
{
	if (!active) { return; }

	for (Component* c : components)
	{
		c->render();
	}
}

Component::~Component() {}
void Component::start() {}
void Component::update() {}
void Component::render() {}
void Component::onCollisionEnter(Collider* collider) {}
void Component::onCollisionStay(Collider* collider) {}
void Component::onCollisionExit(Collider* collider) {}