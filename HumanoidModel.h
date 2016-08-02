#pragma once

#include "Model.h"

class GeometryPtr;

class HumanoidModel : public Model {
public:
	virtual ~HumanoidModel();
	virtual void render(Entity&, float, float, float, float, float, float);
	virtual void setupAnim(float, float, float, float, float, float);
	virtual void prepareMobModel(Mob&, float, float, float);
	
	HumanoidModel(const GeometryPtr&);
	HumanoidModel(float, float, int, int);
};