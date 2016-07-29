#pragma once

#include <memory>
#include <string>

#include "Vibration.h"
#include "GameCallbacks.h"
#include "SkinInfoFactory.h"
#include "AbstractScreen.h"

class PushNotificationMessage;
class ScreenChooser;
class Font;

class MinecraftClient : public Vibration, public GameCallbacks, public SkinInfoFactory {
public: 
	MinecraftClient(int, char **);
	virtual ~MinecraftClient();
	virtual void onLowMemory();
	virtual void onAppSuspended();
	virtual void onAppResumed();
	virtual void onAppFocusLost();
	virtual void onAppFocusGained();
	virtual void onPushNotificationReceived(PushNotificationMessage const &);
	virtual void audioEngineOn();
	virtual void audioEngineOff();
	virtual void muteAudio();
	virtual void unMuteAudio();
	virtual void useTouchscreen();
	virtual void setTextboxText(std::string const &);
	virtual void update();
	virtual void setUISizeAndScale(int, int, float);
	virtual void setRenderingSize(int, int);
	virtual void init();
	virtual void handleBack(bool);
	virtual void onInternetUpdate();
	virtual void canActivateKeyboard();
	virtual void onLevelCorrupt();
	virtual void onGameModeChanged();
	virtual void onGameSessionReset();
	virtual std::unique_ptr<SkinInfoData> createSkin();
	virtual void onLevelExit();
	virtual void onTick(int, int);
	virtual void vibrate(int);

	Font *getFont() const;

	void requestScreenshot(std::string const &);

	void handleToggleDayCycleActiveButtonPress();
	void handleToggleGameModeButtonPress();
	void handleToggleNoClipButtonPress();
	void handleSetSpawnPositionButtonPress();
	void handleTimeStepForwardButtonPress();
	void handleSimTimeScale(float);
	void handleSimTimePause(bool);
	void handleShowUpsellScreen(bool);
	void handleToggleEnableNewScreensDebugButtonPress();
	void handleReloadUIDefinitions();

	void leaveGame(bool);
	ScreenChooser *getScreenChooser() const;

	void pushScreen(std::shared_ptr<AbstractScreen>, bool);
	void popScreen(int);
};