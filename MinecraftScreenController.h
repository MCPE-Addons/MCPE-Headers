#pragma once

#include <memory>

#include "ScreenController.h"
#include "MinecraftScreenModel.h"

// Size : 348
class MinecraftScreenController : public ScreenController {
public: 
	MinecraftScreenModel *model;	// 328
	char filler2[16];				// 332

	MinecraftScreenController(std::shared_ptr<MinecraftScreenModel>);
	virtual ~MinecraftScreenController();
	virtual void tryExit();
	virtual void handleGameEventNotification(ui::GameEventNotification);
	virtual void tick();
	virtual void setSuspendInput(bool);
	virtual void _isStillValid();
	virtual void _getGamepadHelperVisible();
	virtual void _getButtonADescription();
	virtual void _getButtonBDescription();
	virtual void _getButtonXDescription();
	virtual void _getButtonYDescription();
};