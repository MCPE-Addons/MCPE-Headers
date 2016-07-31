#pragma once

#include <glm/glm.hpp>

#include "BaseScreen.h"

class ButtonState;

class ScreenViewAdapter : public BaseScreen {
public: 
	virtual ~ScreenViewAdapter();
	virtual void _init(int, int);
	virtual void setSize(int, int);
	virtual void updateEvents();
	virtual void handleButtonPress(short);
	virtual void handleButtonRelease(short);
	virtual void handlePointerLocation(short, short);
	virtual void handlePointerPressed(bool);
	virtual void handleBackEvent(bool);
	virtual void handleLicenseChanged();
	virtual void setSize(glm::detail::tvec2<float>) = 0;
	virtual void resize() = 0;
	virtual void handleButtonEvent(short, ButtonState) = 0;
	virtual void handlePointerLocation(glm::detail::tvec2<float> const &) = 0;
};