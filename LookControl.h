#pragma once

class Mob;
class Entity;
class Vec3;

class LookControl {
public:
	virtual ~LookControl();
	virtual void tick();
	
	LookControl(Mob&);
	
	void setLookAt(Entity*, float, float);
	void setLookAt(const Vec3&, float, float);
};