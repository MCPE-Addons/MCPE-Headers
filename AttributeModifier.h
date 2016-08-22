#pragma once

class AttributeModifier {
public: 
	virtual ~AttributeModifier();
	virtual bool isInstantaneous() const;
};