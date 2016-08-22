#pragma once

class AttributeBuff {
public: 
	virtual ~AttributeBuff();
	//virtual void __imp___cxa_pure_virtual;
	//virtual void __imp___cxa_pure_virtual;
	virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
};