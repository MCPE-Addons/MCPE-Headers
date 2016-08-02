#pragma once

#include <string>

#include "Goal.h"
#include "PathfinderMob.h"

class RandomStrollGoal : public Goal {
public:
	char rsgfiller1[32 - 8];	// 8-32
	PathfinderMob& mob;
	
	virtual ~RandomStrollGoal();
	virtual bool canUse();
	virtual bool canContinueToUse();
	virtual void start();
	virtual void appendDebugInfo(std::string&) const;
	
	RandomStrollGoal(PathfinderMob&, float, int, int);
};