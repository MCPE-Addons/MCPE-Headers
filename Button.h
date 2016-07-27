#pragma once

#include "GuiElement.h"

class Button : public GuiElement {
public: 
	Button(int, std::string const &, bool);
	Button(int, int, int, std::string const &);
	Button(int, int, int, int, int, std::string const &, bool);
	virtual ~Button();
	virtual void render(MinecraftClient *, int, int);
	virtual void pointerReleased(MinecraftClient *, int, int);
	virtual void drawPressed(int);
	virtual void clicked(MinecraftClient *, int, int);
	virtual void released(int, int);
	virtual void setPressed();
	virtual void setPressed(bool);
	virtual void setMsg(std::string const &);
	virtual void getYImage(bool);
	virtual void renderBg(MinecraftClient *, int, int);
	virtual void renderFace(MinecraftClient *, int, int);
};

namespace Touch {
class TButton : public Button {
public:
	TButton(int, std::string const &, MinecraftClient *, bool, int);
	TButton(int, int, int, std::string const &, MinecraftClient *, int);
	TButton(int, int, int, int, int, std::string const &, MinecraftClient *, bool, int);
	virtual ~TButton();
	virtual void renderBg(MinecraftClient *, int, int);
};

class HeaderButton : public TButton {
public:
	HeaderButton(int, MinecraftClient &, std::string const &, bool, bool);
	virtual ~HeaderButton();
	virtual void setMsg(std::string const &);
};

class THeader : public Button {
public:
	THeader(int, std::string const &);
	THeader(int, int, int, std::string const &);
	THeader(int, int, int, int, int, std::string const &);
	virtual ~THeader();
	virtual void render(MinecraftClient *, int, int);
	virtual void renderBg(MinecraftClient *, int, int);
};
};