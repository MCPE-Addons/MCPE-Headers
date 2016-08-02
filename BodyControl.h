#pragma once

#include "Mob.h"

class BodyControl {
public:
	Mob& mob;	// 4-8
	
	virtual ~BodyControl();
	
	BodyControl(Mob&);
	
	void clientTick();
	
	static const float MAX_CLAMP_ANGLE;	// 75.0F
};