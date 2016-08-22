#pragma once

class AttributeInstanceDelegate {
public: 
	virtual ~AttributeInstanceDelegate();
	virtual ~AttributeInstanceDelegate();
	virtual void tick();
	virtual void notify(long long);
	virtual void change(float, float, AttributeBuffInfo);
	virtual void getBuffValue(AttributeBuff const &) const;
};