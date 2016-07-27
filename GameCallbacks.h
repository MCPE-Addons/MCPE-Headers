#pragma once

class GameCallbacks {
public:
	virtual void onLevelCorrupt() = 0;
	virtual void onGameModeChanged() = 0;
	virtual void onTick(int, int) = 0;
	virtual void onInternetUpdate() = 0;
	virtual void onGameSessionReset() = 0;
	virtual void onLevelExit() = 0;
};