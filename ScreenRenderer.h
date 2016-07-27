#pragma once

#include <memory>

class ScreenRenderer {
	static std::unique_ptr<ScreenRenderer> singletonPtr;

public:
	static ScreenRenderer& singleton();

	ScreenRenderer();
};