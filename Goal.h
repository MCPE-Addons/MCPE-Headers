#pragma once

class Goal {
public:
	int requiredControlFlags;	// 4-8
	
	virtual ~Goal();
	virtual bool canUse() = 0;
	virtual bool canContinueToUse();
	virtual bool canInterrupt();
	virtual void start();
	virtual void stop();
	virtual void tick();
	
	Goal();
	
	int getRequiredControlFlags() const;
	void setRequiredControlFlags(int);
};