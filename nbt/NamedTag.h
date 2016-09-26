#pragma once

#include "../nbt/Tag.h"

class NamedTag : public Tag
{
public:
	virtual ~NamedTag();
	virtual void setName(const std::string &);
	virtual std::string getName() const;
};
