#pragma once

#include "GuiElementContainer.h"

class PackedScrollContainer : public GuiElementContainer {
public: 
	virtual ~PackedScrollContainer();
	virtual void tick(MinecraftClient *);
	virtual void render(MinecraftClient *, int, int);
	virtual void setupPositions();
	virtual void pointerPressed(MinecraftClient *, int, int);
	virtual void setTextboxText(std::string const &);
};