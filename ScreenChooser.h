#pragma once

#include <memory>
#include <json/json.h>

#include "BaseScreen.h"

class MinecraftClient;
class MinecraftUISoundPlayer;

class ScreenChooser {
public:
	MinecraftClient *client;			// 0
	MinecraftUISoundPlayer *player;		// 4

	ScreenChooser(MinecraftClient &, bool);

	Json::Value createGlobalVars() const;

	void _pushScreen(std::shared_ptr<BaseScreen>, bool);
	//void _pushScreen(std::shared_ptr<BaseScreen>, std::unique_ptr<AbstractScreenSetupCleanupStrategy>, bool);

	void setStartMenuScreen();
	void setDisconnectScreen(std::string const &, std::string const &);

	void pushPauseScreen();
	void pushHudScreen();
	void pushChatScreen();
	void pushConsoleScreen();
	void pushToastScreen();
	void pushGameViewerScreen();
	void pushDebugScreen();
	void popScreen(AbstractScreen &, int);
};