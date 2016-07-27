#pragma once

// Size : 8
class Vec2 {
public:
	static const Vec2 ZERO, ONE, MAX, MIN;

	Vec2() : x(0), y(0) {};
	Vec2(float x, float y) : x(x), y(y) {};

	float x, y;	// 0, 4
};
