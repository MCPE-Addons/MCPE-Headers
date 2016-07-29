#pragma once

#include "AbstractScreen.h"

class AbstractScreenSetupCleanupStrategy;

// Size : 8
class BaseScreen : public AbstractScreen {
public: 
	AbstractScreenSetupCleanupStrategy *strategy; // 4

	BaseScreen();
	virtual ~BaseScreen();
	virtual bool getEyeRenderingMode() const;
	virtual std::string getScreenName();
	virtual void toGUICoordinate(int, int, int &, int &);
};