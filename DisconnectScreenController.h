#pragma once

#include "MinecraftScreenController.h"

// Size : 360
class DisconnectScreenController : public MinecraftScreenController {
public: 
	char filler3[12];	// 348

	DisconnectScreenController(std::shared_ptr<MinecraftScreenModel>, std::string const &, std::string const &);
	virtual ~DisconnectScreenController();
	virtual void tick();
	virtual void _getButtonADescription();
};