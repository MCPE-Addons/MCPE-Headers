#pragma once

#include "IConfigListener.h"

class NameRegistry;

class MinecraftInputHandler : public IConfigListener {
public: 
	virtual ~MinecraftInputHandler();
	virtual void onConfigChanged(Config const &);
	NameRegistry *getNameRegistry();
};