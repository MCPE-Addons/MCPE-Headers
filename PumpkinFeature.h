#pragma once

#include "Feature.h"

class PumpkinFeature : public Feature {
public:
	virtual ~PumpkinFeature();
	virtual void place(BlockSource&, const BlockPos&, Random&) const;
};