#pragma once

class Mob;
class Vec3;

class MoveControl {
public:
	virtual ~MoveControl();
	virtual void tick();
	
	MoveControl(Mob&);
	
	float getSpeed() const;
	Vec3& getWantedPosition();
	bool hasWanted() const;
	void setSpeed(float);
	void setWantedPosition(const Vec3&, float);
	
	static const float MAX_TURN; // 30.0F
	static const float MIN_SPEED; // 0.0005F
	static const float MIN_SPEED_SQR; // 0.0F; wtf?
};