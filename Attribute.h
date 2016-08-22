#pragma once

#include <string>

// Size : 20
class Attribute {
public:
	float defaultValue;		// 0-4
	float minValue;			// 4-8
	float maxValue;			// 8-12
	bool clientSynceable;	// 12-16
	std::string& name;		// 16-20
	
	Attribute(const std::string&, float, float, float, bool);
	
	float getDefaultValue() const;
	float getMinValue() const;
	float getMaxValue() const;
	bool isClientSyncable() const;
	const std::string& getName() const;
	
	static Attribute* getByName(const std::string&);
};