#pragma once

#include <string>
#include <json/json.h>

class BlockPos;
class NameRegistry;
class ScreenEvent;
class UIPropertyBag;
class EntityUniqueID;
class ScreenViewCommand;

// Size : 328
class ScreenController {
public: 
	//vtable for ScreenController	// 0
	char filler1[324];				// 4

	ScreenController(NameRegistry &);
	virtual ~ScreenController();
	virtual void onOpen();
	virtual void onTerminate();
	virtual void canExit();
	virtual void tryExit();
	virtual void handleEvent(ScreenEvent);
	virtual void handleGameEventNotification(ui::GameEventNotification);
	virtual void tick();
	virtual void bind(std::string const &, unsigned int, int, std::string const &, unsigned int, std::string const &, UIPropertyBag &);
	virtual void bind(std::string const &, unsigned int, std::string const &, UIPropertyBag &);
	virtual void handleLicenseChanged();
	virtual void setAssociatedBlockPos(BlockPos const &);
	virtual void setAssociatedEntityUniqueID(EntityUniqueID);
	virtual void setSuspendInput(bool);
	virtual void getCallbackInterval() const;
	virtual void setViewCommand(ScreenViewCommand);
	virtual void onRender();
	virtual void addStaticScreenVars(Json::Value &);
	virtual void getAdditionalScreenInfo();
	virtual void getTelemetryProperty(std::string &, std::string &);
};