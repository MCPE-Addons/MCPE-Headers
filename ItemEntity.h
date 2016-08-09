#pragma once

#include "Entity.h"


class ItemEntity : public Entity {
public:
	static int LIFETIME;

	char filler2[40];	// 420
	int lifetime;		// 460

	ItemEntity(BlockSource &);
	ItemEntity(BlockSource &, Vec3 const &, ItemInstance const &, int, float);
	virtual ~ItemEntity();
};