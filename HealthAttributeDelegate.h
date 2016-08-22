#pragma once

class HealthAttributeDelegate {
public: 
	virtual ~HealthAttributeDelegate();
	virtual void tick();
	virtual void change(float, float, AttributeBuffInfo);
	virtual void getBuffValue(AttributeBuff const &) const;
};