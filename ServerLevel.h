#pragma once

#include "Level.h"

class ServerLevel : public Level {
public: 
	virtual ~ServerLevel();
	virtual void tick();
	virtual void updateSleepingPlayerList();
	virtual void setDifficulty(Difficulty);
};