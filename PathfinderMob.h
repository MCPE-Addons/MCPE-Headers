#pragma once

#include "Mob.h"

class PathfinderMob : public Mob {
public: 
	virtual ~PathfinderMob();
	virtual void tickLeash();
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual bool canSpawn(bool);
	virtual void updateAi();
	virtual Entity* getAttackTarget();
	virtual void setAttackTarget(Entity*);
	virtual int _getWalkTargetValue(const BlockPos&);
	virtual int findAttackTarget();
	virtual void checkHurtTarget(Entity*, float);
	virtual void checkCantSeeTarget(Entity*, float);
	virtual bool shouldHoldGround();
	virtual void findRandomStrollLocation();
};