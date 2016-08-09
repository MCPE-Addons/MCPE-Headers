#pragma once

#include <functional>

#include "BlockPos.h"

class PacketSender;
class Level;
class SoundPlayer;
class Vibration;
class Player;
class InputMode;
class ItemInstance;
class Entity;

// Size : 104
class GameMode {
public: 
	//vtable for GameMode		// 0
	PacketSender *packetSender;	// 4
	Level *level;				// 8
	Vibration *vibration;		// 12
	SoundPlayer *soundPlayer;	// 16
	char filler1[12];			// 20
	float oDestroyProgress;		// 32
	float destroyProgress;		// 36
	char filler2[8];			// 40
	bool longPickRange;			// 48
	char filler3[52];			// 52

	GameMode(PacketSender &, Level &, SoundPlayer &, Vibration &);
	virtual ~GameMode();
	virtual void startDestroyBlock(Player &, BlockPos, signed char);
	virtual bool destroyBlock(Player &, BlockPos, signed char);
	virtual void continueDestroyBlock(Player &, BlockPos, signed char);
	virtual void stopDestroyBlock(Player &);
	virtual void startBuildBlock(Player &, BlockPos, signed char);
	virtual bool buildBlock(Player &, BlockPos, signed char);
	virtual void continueBuildBlock(Player &, BlockPos, signed char);
	virtual void stopBuildBlock(Player &);
	virtual void tick();
	virtual float getPickRange(Player *, InputMode const &, bool);
	virtual bool useItem(Player &, ItemInstance &);
	virtual bool useItemOn(Player &, ItemInstance *, BlockPos const &, signed char, Vec3 const &);
	virtual bool interact(Player &, Entity &);
	virtual void attack(Player &, Entity &);
	virtual void releaseUsingItem(Player &);
	virtual void setTrialMode(bool);
	virtual bool isInTrialMode();
	virtual void registerUpsellScreenCallback(std::function<void (bool)>);
};