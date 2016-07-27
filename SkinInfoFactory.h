#pragma once

#include <memory>

#include "SkinInfoData.h"

class SkinInfoFactory {
public:
	virtual std::unique_ptr<SkinInfoData> createSkin() = 0;
};
