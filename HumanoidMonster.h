#pragma once

#include "Monster.h"

class HumanoidMonster : public Monster {
public:
	virtual ~HumanoidMonster();
	virtual void setEquippedSlot(ArmorSlot, int, int);
	virtual void setEquippedSlot(ArmorSlot, const ItemInstance&);
	virtual EntityType getEntityTypeId() const = 0;
	virtual void readAdditionalSaveData(const CompoundTag&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void postInit();;
	virtual void getCarriedItem();
	virtual void setCarriedItem(const ItemInstance&);
	virtual void doHurtTarget(Entity*);
	virtual int getExperienceReward() const;
	virtual void determineStartingGear();
	virtual void rollMobArmor();
	virtual void rollWeaponEnchant();
};