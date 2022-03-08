#include "collision.h"

const float PI = 3.1415;
//
//void draw_circle(const Circle& c)
//{
//	int resolution = 48;
//	float step = (2 * PI) / resolution;
//
//	for (int i = 0; i < resolution; ++i)
//	{
//		float angle = step * i;
//		float x1 = cos(angle);
//		float y1 = sin(angle);
//
//		float next_angle = step * (i + 1);
//		float x2 = cos(next_angle);
//		float y2 = sin(next_angle);
//
//		SDL_RenderDrawLine(
//			render,
//			x1 * c.radius + c.x,
//			y1 * c.radius + c.y,
//			x2 * c.radius + c.x,
//			y2 * c.radius + c.y
//		);
//	}
//}
//
//bool circle_intersect(const Circle& a, const Circle& b)
//{
//	float dx = b.x - a.x;
//	float dy = b.y - a.y;
//
//	// Pythagoras!!!!
//	// dist^2 = x^2 + y^2
//	float dist_sqrd = dx * dx + dy * dy;
//	float dist = sqrt(dist_sqrd);
//
//	float radius_sum = a.radius + b.radius;
//	return dist < radius_sum;
//}
//
//AABB AABB::make_from_position_size(float x, float y, float w, float h)
//{
//	AABB box;
//	box.x_min = x - w / 2;
//	box.y_min = y - h / 2;
//	box.x_max = x + w / 2;
//	box.y_max = y + h / 2;
//
//	return box;
//}
//
//void draw_box(const AABB& box)
//{
//	SDL_Rect rect = {
//		box.x_min,
//		box.y_min,
//		box.x_max - box.x_min,
//		box.y_max - box.y_min
//	};
//
//	SDL_RenderDrawRect(render, &rect);
//}
