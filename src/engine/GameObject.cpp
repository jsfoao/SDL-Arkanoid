#include <SDL/SDL.h>
#include "GameObject.h"

GameObject::GameObject() 
{
	position = Vector2(100, 100);
	scale = Vector2(16, 16);
	color = Color(255, 0, 0, 255);
}
GameObject::GameObject(const Vector2& position, const Vector2& scale, const Color& color)
{
	this->position = position;
	this->scale = scale;
	this->color = color;
}

GameObject::start() {}
GameObject::update() {}
//GameObject::draw(SDL_Renderer* renderer)
//{
//	SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
//	SDL_Rect rect = { position.x, position.y, scale.x, scale.y };
//	SDL_RenderFillRect(renderer, &rect);
//}