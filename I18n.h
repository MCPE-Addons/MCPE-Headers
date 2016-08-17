#pragma once

#include <string>
#include <vector>

#include "Localization.h"

class I18n {
public:
	static std::string get(const std::string&, const std::vector<std::string>&);
	static std::string get(const std::string&);
	static Localization getCurrentLanguage();
	static Localization getLocaleFor(const std::string&);
};