#pragma once

#include <memory>

#include "GameMode.h"
#include "GameType.h"

class Vibration;
class SoundPlayer;
class PacketSender;
class Level;

class Minecraft {
public:
	char filler1[8];				// 0
	Vibration *vibration;			// 8
	SoundPlayer *soundPlayer;		// 12
	char filler2[64];				// 16
	PacketSender *packetSender;		// 80

	std::unique_ptr<GameMode> createGameMode(GameType, Level &);
};