#pragma once

#include <json/json.h>

// Size : 16
class PropertyBag {
public:
	Json::Value value;	// 0

	PropertyBag();
	PropertyBag(const Json::Value &);
};