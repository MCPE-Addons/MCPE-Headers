#pragma once

#include <string>

#include "Goal.h"

class Mob;

class LookAtPlayerGoal : public Goal {
public:
	virtual ~LookAtPlayerGoal();
	virtual bool canUse();
	virtual bool canContinueToUse();
	virtual void start();
	virtual void stop();
	virtual void tick();
	virtual void appendDebugInfo(std::string&) const;
	
	LookAtPlayerGoal(Mob&, float, float);
};