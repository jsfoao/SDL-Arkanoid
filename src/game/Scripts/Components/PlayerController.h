#pragma once
#include "../src/engine/ECS/ECS.h"

class PlayerController : public Component
{
public:
	float speed;
public:
	void start() override;
	void update() override;
	void onCollisionEnter(Collider* collider) override;
	void onCollisionExit(Collider* collider) override;
};