#pragma once

#include "Entity.h"
#include "ItemInstance.h"

// Size : 464
class ItemEntity : public Entity {
public:
	static int LIFETIME;

	ItemInstance instance;	// 420
	char filler1[20];		// 440
	int lifetime;			// 460

	ItemEntity(BlockSource &);
	ItemEntity(BlockSource &, Vec3 const &, ItemInstance const &, int, float);
	virtual ~ItemEntity();
	virtual void getAddPacket();
	virtual void normalTick();
	virtual void playerTouch(Player &);
	virtual bool isPushable() const;
	virtual void hurt(EntityDamageSource const &, int);
	virtual EntityType getEntityTypeId() const;
	virtual void getSourceUniqueID();
	virtual void getHandleWaterAABB() const;
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);

	void setSourceEntity(const Entity *);
};