#pragma once

#include "Screen.h"
#include "OptionsPane.h"

class OptionsScreen : public Screen {
public: 
	char osfiller[4];							// 140
	std::vector<OptionsPane *> optionsPanes;	// 144

	virtual ~OptionsScreen();
	virtual void onSetKeyboardHeight(float);
	virtual void onFocusGained();
	virtual void onFocusLost();
	virtual void handleButtonRelease(short);
	virtual void handleBackEvent(bool);
	virtual void handleTextChar(std::string const &, bool);
	virtual void handleCaretLocation(int);
	virtual void setTextboxText(std::string const &);
	virtual bool renderGameBehind() const;
	virtual std::string getScreenName();
	virtual void render(int, int, float);
	virtual void init();
	virtual void setupPositions();
	virtual void tick();
	virtual void handleScrollWheel(float);
	virtual void _buttonClicked(Button &);
	virtual void _pointerPressed(int, int);
	virtual void _pointerReleased(int, int);
	virtual void _controllerDirectionChanged(int, StickDirection);
	virtual void _controllerDirectionHeld(int, StickDirection);
	virtual void generateOptionScreens();
	virtual void createCategoryButtons();
	virtual void renderBgFill();
};