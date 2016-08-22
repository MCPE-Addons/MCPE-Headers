#pragma once

#include "PackedScrollContainer.h"

class OptionsGroup;

class OptionsPane : public PackedScrollContainer {
public: 
	virtual ~OptionsPane();
	virtual void setupPositions();
	virtual void suppressInput();

	OptionsGroup *createOptionsGroup(std::string const &, bool);
};