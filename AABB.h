#pragma once

#include "Vec3.h"

// Size : 25(28)
class AABB {
public:
	static AABB EMPTY;

	Vec3 min;
	Vec3 max;
	bool empty;

	AABB();
	AABB(const Vec3 &, float);
	AABB(const Vec3 &, const Vec3 &);
	AABB(float, float, float, float, float, float);
	
	void move(const Vec3 &);
	void move(float, float, float);

	void set(const AABB &);
	void set(const Vec3 &, const Vec3 &);
	void set(float, float, float, float, float, float);

	bool operator==(const AABB &) const;
};