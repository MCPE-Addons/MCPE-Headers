#pragma once

#include <json/json.h>

#include "UIControl.h"

class UIDefRepository;
class NameRegistry;
class UISoundPlayer;
class Font;

// Size : 48
class UIControlFactory {
public:
	char filler1[48];	// 0

	UIControlFactory(UIDefRepository const &, Json::Value &, NameRegistry &, UISoundPlayer const &, Font *);
	~UIControlFactory();

	std::shared_ptr<UIControl> createControlTree(std::string const &, std::shared_ptr<UIControl>);
};