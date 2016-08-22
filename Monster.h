#pragma once

#include "PathfinderMob.h"

class Monster : public PathfinderMob {
public: 
	virtual ~Monster();
	virtual void normalTick();
	virtual bool isSurfaceMob() const;
	virtual void hurt(EntityDamageSource const &, int);
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void aiStep();
	virtual bool canSpawn(bool);
	virtual bool shouldDespawn() const;
	virtual void doHurtTarget(Entity *);
	virtual int getExperienceReward() const;
	virtual void registerAttributes();
	virtual void _getWalkTargetValue(BlockPos const &);
	virtual void findAttackTarget();
	virtual void checkHurtTarget(Entity *, float);
	virtual void isDarkEnoughToSpawn();
	virtual void getAttackTime();
};