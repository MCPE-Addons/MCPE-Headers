#pragma once

#include "HumanoidMonster.h"

class Zombie : public HumanoidMonster {
public: 
	virtual ~Zombie();
	virtual void normalTick();
	virtual void positionRider(Entity &) const;
	virtual float getRidingHeight();
	virtual bool isBaby() const;
	virtual EntityType getEntityTypeId() const;
	virtual bool canAddRider(Entity &) const;
	virtual void setSize(float, float);
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void _playStepSound(BlockPos const &, int);
	virtual void postInit();
	virtual void die(EntityDamageSource const &);
	virtual void finalizeMobSpawn();
	virtual void doHurtTarget(Entity *);
	virtual void getArmorValue();
	virtual int getDeathLoot();
	virtual void dropRareDeathLoot();
	virtual void _getAmbientSound();
	virtual void _getHurtSound();
	virtual void _getDeathSound();
	virtual int getExperienceReward() const;
	virtual bool useNewAi();
	virtual void registerAttributes();
	virtual void determineStartingGear();
	virtual void getBabyProbability() const;
	virtual void updateZombieParams();

	void setBaby(bool);
};