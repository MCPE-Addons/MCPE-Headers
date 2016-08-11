#pragma once

#include "Entity.h"

class HitResult;

// Size : 460
class Fireball : public Entity {
public: 
	char filler3[40];		// 420

	virtual ~Fireball();
	virtual void lerpMotion(Vec3 const &);
	virtual void normalTick();
	virtual float getShadowHeightOffs();
	virtual void getBrightness(float);
	virtual bool isPickable();
	virtual void hurt(EntityDamageSource const &, int);
	virtual void getPickRadius();
	virtual void getSourceUniqueID();
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void onHit(HitResult const &) = 0;
};