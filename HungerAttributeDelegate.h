#pragma once

class HungerAttributeDelegate {
public: 
	virtual ~HungerAttributeDelegate();
	virtual void tick();
	virtual void notify(long long);
};