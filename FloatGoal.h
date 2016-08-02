#pragma once

#include <string>

#include "Mob.h"

class FloatGoal : public Goal {
public:
	Mob& mob;	// 8-12
	
	virtual ~FloatGoal();
	virtual bool canUse();
	virtual void tick();
	virtual void appendDebugInfo(std::string&) const;
	
	FloatGoal(Mob&);
};