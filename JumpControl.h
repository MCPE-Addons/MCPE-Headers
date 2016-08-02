#pragma once

#include "Mob.h"

class JumpControl {
public:
	Mob& mob;		// 4-8
	bool jumping;	// 8-12
	
	virtual ~JumpControl();
	virtual void tick();
	
	JumpControl(Mob&);
	
	void jump();
};