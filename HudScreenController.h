#pragma once

#include "MinecraftScreenController.h"

class HudScreenController : public MinecraftScreenController {
public: 
	HudScreenController(std::shared_ptr<MinecraftScreenModel>);
	virtual ~HudScreenController();
	virtual void onOpen();
	virtual void handleGameEventNotification(ui::GameEventNotification);
	virtual void tick();
	virtual void bind(std::string const &, unsigned int, int, std::string const &, unsigned int, std::string const &, UIPropertyBag &);
	virtual void bind(std::string const &, unsigned int, std::string const &, UIPropertyBag &);
	virtual void addStaticScreenVars(Json::Value &);
	virtual void _isStillValid() const;

	void _registerEventHandlers();
};