#pragma once

#include <string>
#include <json/json.h>

#include "StringHash.h"

class BlockPos;
class NameRegistry;
class ScreenEvent;
class UIPropertyBag;
class EntityUniqueID;
class ScreenViewCommand;
namespace ui { class GameEventNotification; }

// Size : 328
class ScreenController {
public: 
	typedef std::function<void(const std::string &, const UIPropertyBag &)> FactoryCreateCallback;
	typedef std::function<void(const std::string &, const std::string &)> FactoryDestroyCallback;

	//vtable for ScreenController				// 0
	FactoryCreateCallback createCallback;		// 4
	FactoryDestroyCallback destoryCallback;		// 20
	char filler1[292];							// 36

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

	void bindString(StringHash, std::function<std::string()>, std::function<bool()>);
	void bindBool(StringHash, std::function<bool()>, std::function<bool()>);
	void bindInt(StringHash, std::function<int()>, std::function<bool()>);
	void bindFloat(StringHash, std::function<float()>, std::function<bool()>);
};