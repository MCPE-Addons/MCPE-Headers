#pragma once

#include <memory>

class Font;
class Color;

class ScreenRenderer {
	static std::unique_ptr<ScreenRenderer> singletonPtr;

public:
	static ScreenRenderer& singleton();

	ScreenRenderer();

	void drawString(Font *, std::string const &, int, int, Color const &);
	void drawCenteredString(Font *, std::string const &, int, int, Color const &);
};