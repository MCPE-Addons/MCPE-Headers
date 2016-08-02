#pragma once

#include "Feature.h"

class IceSpikeFeature : public Feature {
public:
	virtual ~IceSpikeFeature();
	virtual void place(BlockSource&, const BlockPos&, Random&) const;
};