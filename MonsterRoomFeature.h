#pragma once

#include "Feature.h"

class MonsterRoomFeature : public Feature {
public:
	virtual ~MonsterRoomFeature();
	virtual void place(BlockSource&, const BlockPos&, Random&) const;
};