#pragma once

#include "PathfinderMob.h"

class Monster : public PathfinderMob {
public:
	virtual ~Monster();
	virtual void normalTick();
	virtual bool isSurfaceMob() const;
	virtual void hurt(const EntityDamageSource&, int);
	virtual EntityType getEntityTypeId() const = 0;
	virtual void readAdditionalSaveData(const CompoundTag&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void aiStep();
	virtual bool canSpawn(bool);
	virtual bool shouldDespawn() const;
	virtual void doHurtTarget(Entity*);
	virtual int getExperienceReward() const;
	virtual void registerAttributes();
	virtual int _getWalkTargetValue(const BlockPos&);
	virtual int findAttackTarget();
	virtual void checkHurtTarget(Entity*, float);
	virtual bool isDarkEnoughToSpawn();
	virtual int getAttackTime();
};