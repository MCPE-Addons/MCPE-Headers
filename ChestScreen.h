#pragma once

#include "Screen.h"
#include "InventoryPane.h"

class ChestScreen : public Screen, public Touch::IInventoryPaneCallback {
public: 
	virtual ~ChestScreen();
	virtual void onInternetUpdate();
	virtual void handleButtonPress(short);
	virtual void handleButtonRelease(short);
	virtual void handleBackEvent(bool);
	virtual void renderGameBehind();
	virtual void getScreenName();
	virtual void render(int, int, float);
	virtual void init();
	virtual void setupPositions();
	virtual void tick();
	virtual void handleScrollWheel(float);
	virtual void _buttonClicked(Button &);
	virtual void _controllerDirectionChanged(int, StickDirection);
	virtual void _controllerDirectionHeld(int, StickDirection);
	virtual void containerChanged(int);
	virtual bool addItem(Touch::InventoryPane &, int);
	virtual bool isAllowed(int);
	virtual std::vector<const ItemInstance *> getItems(Touch::InventoryPane const &);
};