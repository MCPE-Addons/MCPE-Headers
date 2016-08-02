#pragma once

#include "Mob.h"

class PathfinderMob : public Mob {
public:
	virtual ~PathfinderMob();
	virtual EntityType getEntityTypeId() const = 0;
	virtual void tickLeash();
	virtual void readAdditionalSaveData(const CompoundTag&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void canSpawn(bool);
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