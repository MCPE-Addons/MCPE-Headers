#pragma once

#include "BlockPos.h"
#include "Vec3.h"

class Entity;

enum HitResultType { BLOCK, ENTITY, NO_HIT };

// Size : 37(40)
class HitResult {
public:
	HitResult();
	HitResult(const Vec3 &);
	HitResult(Entity &);
	HitResult(Entity &, const Vec3 &);
	HitResult(const BlockPos &, signed char, const Vec3 &);
	HitResult(const HitResult &);

	float distanceTo(const Entity &) const;
	void setOutOfRange();

	HitResultType type;	// 0
	int f;				// 4
	BlockPos block;		// 8
	Vec3 pos;			// 20
	Entity *entity;		// 32
	bool indirectHit;	// 36
};