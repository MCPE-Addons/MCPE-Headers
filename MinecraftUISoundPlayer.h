#pragma once

#include <string>

class MinecraftClient;

class UISoundPlayer {};

// Size : 8
class MinecraftUISoundPlayer : public UISoundPlayer {
public: 
	//vtable for MinecraftUISoundPlayer	// 0
	char filler1[4];					// 4

	MinecraftUISoundPlayer(MinecraftClient &);
	virtual ~MinecraftUISoundPlayer();
	virtual void play(std::string const &, float, float);
};