#pragma once

#include "BaseScreen.h"
#include "GuiComponent.h"

#include "Button.h"
#include "GuiElement.h"
#include "MinecraftClient.h"

class InputMode;
class HoloUIInputMode;
class DirectionId;
class MojangConnectionStatus;

// Size : 140
class Screen : public BaseScreen, public GuiComponent {
public: 
	//vtable for GuiComponent	// 8
	char filler1[8];			// 12
	MinecraftClient *client;	// 20
	char filler2[116];			// 24

	Screen(MinecraftClient &);

	virtual ~Screen();
	virtual void _init(int, int);
	virtual void setSize(int, int);
	virtual void onSetKeyboardHeight(float);
	virtual void setAssociatedBlockPos(BlockPos const &);
	virtual void onInternetUpdate();
	virtual void onFocusGained();
	virtual void onFocusLost();
	virtual void terminate();
	virtual void tick(int, int);
	virtual void updateEvents();
	virtual void render(ScreenContext &);
	virtual void handleInputModeChanged(InputMode);
	virtual void handleHoloInputModeChanged(HoloUIInputMode);
	virtual void handleButtonPress(short);
	virtual void handleButtonRelease(short);
	virtual void handlePointerLocation(short, short);
	virtual void handlePointerPressed(bool);
	virtual void handleDirection(DirectionId, float, float);
	virtual void handleBackEvent(bool);
	virtual void handleTextChar(std::string const &, bool);
	virtual void handleCaretLocation(int);
	virtual void setTextboxText(std::string const &);
	virtual void handleLicenseChanged();
	virtual void handleGazeGestureInput(short, float, float, float);
	virtual void handleDictationEvent();
	virtual void handleCommandEvent(VoiceCommand const &);
	virtual bool renderGameBehind() const;
	virtual void absorbsInput() const;
	virtual bool closeOnPlayerHurt() const;
	virtual int getWidth();
	virtual int getHeight();
	virtual std::string getScreenName();
	virtual void toGUICoordinate(int, int, int &, int &);
	virtual void render(int, int, float);
	virtual void init();
	virtual void setupPositions();
	virtual void checkForPointerEvent();
	virtual void controllerEvent();
	virtual void tick();
	virtual void renderBackground(int);
	virtual void renderDirtBackground();
	virtual void renderMenuBackground(float);
	virtual void confirmResult(bool, int);
	virtual void supppressedBySubWindow();
	virtual void onTextBoxUpdated(int);
	virtual void onMojangConnectorStatus(MojangConnectionStatus);
	virtual void handleScrollWheel(float);
	virtual void _handlePointerAction(int, int, bool);
	virtual void _updateTabButtonSelection();
	virtual void _buttonClicked(Button &);
	virtual void _guiElementClicked(GuiElement &);
	virtual void _pointerPressed(int, int);
	virtual void _pointerReleased(int, int);
	virtual void _controllerDirectionChanged(int, StickDirection);
	virtual void _controllerDirectionHeld(int, StickDirection);
};