#pragma once

#include "GameMode.h"

// Size : 128
class SurvivalMode : public GameMode {
public: 
	bool trialMode;		// 104
	char filler4[20];	// 108

	SurvivalMode(PacketSender &, Level &, SoundPlayer &, Vibration &);
	virtual ~SurvivalMode();
	virtual void startDestroyBlock(Player &, BlockPos, signed char);
	virtual void destroyBlock(Player &, BlockPos, signed char);
	virtual void tick();
	virtual bool useItem(Player &, ItemInstance &);
	virtual bool useItemOn(Player &, ItemInstance *, BlockPos const &, signed char, Vec3 const &);
	virtual void setTrialMode(bool);
	virtual bool isInTrialMode();
	virtual void registerUpsellScreenCallback(std::function<void (bool)>);
};