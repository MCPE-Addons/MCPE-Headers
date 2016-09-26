#pragma once

#include <string>

class ResourceLocation {
public:
	std::string str1;
	std::string str2;

	ResourceLocation() {
		ResourceLocation("");
	}

	ResourceLocation(const std::string &s) {
		str1 = s;
		str2 = "InAppPackageImages";
	}

	~ResourceLocation() {

	}

	std::string getFullPath() const;
	
	bool operator==(const ResourceLocation& res) const {
		return this->str1 == res.str1 && this->str2 == res.str2;
	}
};
