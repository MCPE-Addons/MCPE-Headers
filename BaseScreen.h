#pragma once

#include "AbstractScreen.h"

class BaseScreen : public AbstractScreen {
public: 
	BaseScreen();
	virtual ~BaseScreen();
	virtual void getEyeRenderingMode() const;
	virtual void getScreenName();
	virtual void toGUICoordinate(int, int, int &, int &);
};