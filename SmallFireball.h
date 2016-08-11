#pragma once

#include "Fireball.h"

class Mob;

// Size : 464
class SmallFireball : public Fireball {
public: 
	char filler4[4];	// 460

	SmallFireball(BlockSource &);
	SmallFireball(BlockSource &, Vec3 const &, Vec3 const &);
	SmallFireball(Mob &, Vec3 const &);
	virtual ~SmallFireball();
	virtual bool isPickable();
	virtual void hurt(EntityDamageSource const &, int);
	virtual EntityType getEntityTypeId() const;
	virtual void onHit(HitResult const &);
};