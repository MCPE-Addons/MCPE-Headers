#pragma once

#include "Goal.h"
#include "Mob.h"

class RandomLookAroundGoal : public Goal {
public:
	char rlagfiller[20 - 8];	// 8-20
	Mob& mob;					// 20-24
	
	virtual ~RandomLookAroundGoal();
	virtual bool canUse();
	virtual bool canContinueToUse();
	virtual void start();
	virtual void tick();
	virtual void appendDebugInfo(std::string&) const;
};