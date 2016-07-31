#pragma once

#include <string>

class BlockPos;
class VoiceCommand;
class ScreenContext;
class UIScreenContext;

namespace ui {class GameEventNotification;}
class InputMode;
class HoloUIInputMode;
class DirectionId;

class AbstractScreen {
public: 
	//vtable for AbstractScreen // 0

	virtual ~AbstractScreen();
	virtual void _init(int, int) = 0;
	virtual void setSize(int, int) = 0;
	virtual void onSetKeyboardHeight(float) = 0;
	virtual void setAssociatedBlockPos(BlockPos const &) = 0;
	virtual void onInternetUpdate() = 0;
	virtual void onFocusGained() = 0;
	virtual void onFocusLost() = 0;
	virtual void terminate() = 0;
	virtual void onGameEventNotification(ui::GameEventNotification);
	virtual void _handleDirtyVisualTree(bool);
	virtual void tick(int, int) = 0;
	virtual void updateEvents() = 0;
	virtual void applyInput(float);
	virtual void render(ScreenContext &) = 0;
	virtual void setupAndRender(UIScreenContext &);
	virtual void handleInputModeChanged(InputMode) = 0;
	virtual void handleHoloInputModeChanged(HoloUIInputMode) = 0;
	virtual void handleButtonPress(short) = 0;
	virtual void handleButtonRelease(short) = 0;
	virtual void handlePointerLocation(short, short) = 0;
	virtual void handlePointerPressed(bool) = 0;
	virtual void handleDirection(DirectionId, float, float) = 0;
	virtual void handleBackEvent(bool) = 0;
	virtual void handleTextChar(std::string const &, bool) = 0;
	virtual void handleCaretLocation(int) = 0;
	virtual void setTextboxText(std::string const &) = 0;
	virtual void handleLicenseChanged() = 0;
	virtual void handleGazeGestureInput(short, float, float, float) = 0;
	virtual void handleDictationEvent() = 0;
	virtual void handleCommandEvent(VoiceCommand const &) = 0;
	virtual bool renderGameBehind() const = 0;
	virtual void absorbsInput() const = 0;
	virtual bool closeOnPlayerHurt() const = 0;
	virtual bool isModal() const;
	virtual bool isShowingMenu() const;
	virtual bool shouldStealMouse() const;
	virtual bool screenIsNotFlushable() const;
	virtual bool screenDrawsLast() const;
	virtual void getFocusedControl();
	virtual bool isWorldViewer() const;
	virtual bool isPauseScreen() const;
	virtual bool renderOnlyWhenTopMost() const;
	virtual bool lowFreqRendering() const;
	virtual bool ignoreAsTop() const;
	virtual int getWidth() = 0;
	virtual int getHeight() = 0;
	virtual void getRenderingAABB();
	virtual void getNumberOfRenderPasses() const;
	virtual bool getEyeRenderingMode() const;
	virtual std::string getScreenName() = 0;
	virtual bool getSendTelemetry();
	virtual void getTelemetryProperty(std::string &, std::string &);
};