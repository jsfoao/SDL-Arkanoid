#include "Transform.h"

#pragma region Transform
Transform::~Transform() {}
Transform::Transform()
{
	position = Vector2(0, 0);
	scale = Vector2(32, 32);
}
void Transform::update() {}
#pragma endregion