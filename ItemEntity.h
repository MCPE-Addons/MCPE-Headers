#pragma once

#include "Entity.h"
#include "ItemInstance.h"

class ItemEntity : public Entity {
public:
	static int LIFETIME;

	ItemInstance instance;	// 420
	char filler1[20];		// 440
	int lifetime;			// 460

	ItemEntity(BlockSource &);
	ItemEntity(BlockSource &, Vec3 const &, ItemInstance const &, int, float);
	virtual ~ItemEntity();
};