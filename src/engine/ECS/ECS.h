#pragma once
#include <vector>
#include "SDL/SDL.h"
#include "../Vector/Vector2.h"
#include "../Color/Color.h"

class Entity;
class Component;
class Transform;
class Renderer;

class Entity
{
public:
	bool active = true;
	std::vector<Component*> components;
	SDL_Renderer* sdl_renderer;
	Transform* transform;
	Renderer* renderer;

public:
	Entity();
	~Entity();
	void start();
	void update();
	void render();
	void destroy();

	template <typename T>
	T* addComponent()
	{
		T* newComponent = new T();
		newComponent->owner = this;
		components.push_back(newComponent);
		return newComponent;
	}

	template <typename T>
	T* getComponent()
	{
		for (Component* component : components)
		{
			if (typeid(*component).name() == typeid(T).name())
			{
				return (T*)component;
			}
		}
	}

};

class Component
{
public:
	bool active = true;
	Entity* owner;

	virtual ~Component();
	virtual void start();
	virtual void update();
	virtual void render();
};