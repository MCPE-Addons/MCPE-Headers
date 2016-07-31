#pragma once

#include <string>

#include "Vec2.h"

class KeyboardManager {};

// Size : 12
class MinecraftKeyboardManager : public KeyboardManager {
public: 
	//vtable for KeyboardManager
	char filler1[8];	// 4

	MinecraftKeyboardManager();
	virtual ~MinecraftKeyboardManager();
	virtual void enableKeyboard(std::string const &, int, bool, bool, Vec2 const &);
	virtual bool isFullScreenKeyboard() const;
	virtual void disableKeyboard();
	virtual void canActivateKeyboard();
	virtual bool isKeyboardEnabled() const;
	virtual bool isKeyboardActive() const;
	virtual void getKeyboardHeight();
};