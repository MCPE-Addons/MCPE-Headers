#pragma once

class AttributeInstance {
public: 
	virtual ~AttributeInstance();
	virtual void tick();

	void setRange(float, float, float);
};