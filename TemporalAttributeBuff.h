#pragma once

class TemporalAttributeBuff {
public: 
	virtual ~TemporalAttributeBuff();
	virtual void isInstantaneous() const;
	virtual void isSerializable() const;
	virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
	virtual void shouldBuff() const;
	virtual void isComplete() const;
};