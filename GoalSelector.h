#pragma once

#include <memory>

#include "Goal.h"

class GoalSelector {
public:
	// urgent: size!
	// Since class has no constructor
	// it will be harder to determine :(
	
	void addGoal(int, std::unique_ptr<Goal>);
	void removeGoal(Goal*);
};