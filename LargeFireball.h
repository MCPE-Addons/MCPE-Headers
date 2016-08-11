#pragma once

#include "Fireball.h"

class Mob;

// Size : 464
class LargeFireball : public Fireball {
public: 
	char filler4[4];	// 460

	LargeFireball(BlockSource &);
	LargeFireball(BlockSource &, Vec3 const &, Vec3 const &);
	LargeFireball(Mob &, Vec3 const &);
	virtual ~LargeFireball();
	virtual EntityType getEntityTypeId() const;
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void onHit(HitResult const &);

	void setExplosionPower(int);
};