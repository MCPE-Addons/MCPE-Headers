#pragma once

#include "Zombie.h"

class PigZombie : Zombie {
public: 
	virtual ~PigZombie();
	virtual void normalTick();
	virtual void interactWithPlayer(Player &);
	virtual void hurt(EntityDamageSource const &, int);
	virtual EntityType getEntityTypeId() const;
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void postInit();
	virtual bool canSpawn(bool);
	virtual void finalizeMobSpawn();
	virtual void setTarget(Mob *);
	virtual int getDeathLoot();
	virtual void dropDeathLoot(int);
	virtual void dropRareDeathLoot();
	virtual void _getAmbientSound();
	virtual void _getHurtSound();
	virtual void _getDeathSound();
	virtual int getExperienceReward() const;
	virtual void registerAttributes();
	virtual void findAttackTarget();
	virtual void getAttackTime();
	virtual void determineStartingGear();
	virtual void getBabyProbability() const;

	void _alert(Mob &);
};