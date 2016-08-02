#pragma once

class Entity;
class Mob;

class Model : public AppPlatformListener {
public:
	virtual ~Model();
	virtual void onAppSuspended();
	virtual void clear();
	virtual void render();
	virtual void render(Entity&, float, float, float, float, float, float);
	virtual void setupAnim(float, float, float, float, float, float);
	virtual void prepareMobModel(Mob&, float, float, float);
	virtual void getLeashOffsetPosition() const;
	
	Model();
};