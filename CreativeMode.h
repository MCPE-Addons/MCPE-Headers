#pragma once

#include "GameMode.h"

// Size : 104
class CreativeMode : public GameMode {
public: 
	CreativeMode(PacketSender &, Level &, SoundPlayer &, Vibration &);
	virtual ~CreativeMode();
};