#pragma once

#include "PropertyBag.h"

// Size : 56
class UIPropertyBag {
public: 
	enum ContextObject {};

	//vtable for UIPropertyBag	// 0
	char filler1[4];			// 4
	PropertyBag bag;			// 8
	char filler2[24];			// 32

	UIPropertyBag();
	UIPropertyBag(const Json::Value &);
	void _handlePropertyChangedNotifications(const std::string &, Json::Value, UIPropertyBag::ContextObject);

	template<typename T>
	void set(const std::string &str, T value) {
		bag.value[str] = value;
		_handlePropertyChangedNotifications(str, bag.value[str], (ContextObject)0);
	}
};