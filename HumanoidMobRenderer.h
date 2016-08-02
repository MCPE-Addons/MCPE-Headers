#pragma once

#include "MobRenderer.h"

class HumanoidModel;

class HumanoidMobRenderer : public MobRenderer {
public:
	virtual ~HumanoidMobRenderer();
	virtual void render(Entity&, const Vec3&, float, float);
	virtual void prepareArmor(Mob&, ArmorSlot, float);
	virtual void prepareCarriedItem(Model&, Mob&, ItemInstance*);
	virtual void additionalRendering(Model&, Mob&, float, float, float, float, float, float, float);
	
	HumanoidMobRenderer(std::unique_ptr<HumanoidModel>, std::unique_ptr<HumanoidModel>, std::unique_ptr<HumanoidModel>, mce::TexturePtr, float);
	HumanoidMobRenderer(std::unique_ptr<HumanoidModel>, std::unique_ptr<HumanoidModel>, std::unique_ptr<HumanoidModel>, std::unique_ptr<HumanoidModel>, mce::TexturePtr, float);
};