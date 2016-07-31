#pragma once

#include <memory>

#include "ScreenViewAdapter.h"
#include "ScreenController.h"
#include "UIControl.h"
#include "UIControlFactory.h"

class NameRegistry;
class KeyboardManager;
class ScreenEvent;

// Size : 456
class ScreenView : public ScreenViewAdapter {
public: 
	char filler2[448];	// 8

	ScreenView(NameRegistry &, KeyboardManager &, std::shared_ptr<ScreenController>, std::shared_ptr<UIControl> &, std::unique_ptr<UIControlFactory>);
	virtual ~ScreenView();
	virtual void onSetKeyboardHeight(float);
	virtual void setAssociatedBlockPos(BlockPos const &);
	virtual void onInternetUpdate();
	virtual void onFocusGained();
	virtual void onFocusLost();
	virtual void terminate();
	virtual void onGameEventNotification(ui::GameEventNotification);
	virtual void _handleDirtyVisualTree(bool);
	virtual void tick(int, int);
	virtual void applyInput(float);
	virtual void render(ScreenContext &);
	virtual void setupAndRender(UIScreenContext &);
	virtual void handleInputModeChanged(InputMode);
	virtual void handleHoloInputModeChanged(HoloUIInputMode);
	virtual void handleDirection(DirectionId, float, float);
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
	virtual bool isModal() const;
	virtual bool isShowingMenu() const;
	virtual bool shouldStealMouse() const;
	virtual bool screenIsNotFlushable() const;
	virtual bool screenDrawsLast() const;
	virtual void getFocusedControl() const;
	virtual bool renderOnlyWhenTopMost() const;
	virtual bool lowFreqRendering() const;
	virtual bool ignoreAsTop() const;
	virtual int getWidth();
	virtual int getHeight();
	virtual void getRenderingAABB();
	virtual std::string getScreenName();
	virtual bool getSendTelemetry();
	virtual void getTelemetryProperty(std::string &, std::string &);
	virtual void toGUICoordinate(int, int, int &, int &);
	virtual void setSize(glm::detail::tvec2<float>);
	virtual void resize();
	virtual void handleButtonEvent(short, ButtonState);
	virtual void handlePointerLocation(glm::detail::tvec2<float> const &);
	virtual void handleControlEvent(ScreenEvent);
};