#pragma once

#include <memory>

#include "EntityRenderer.h"

class Mob;
enum ArmorSlot;
class ItemInstance;
class Matrix;
class Model;

class MobRenderer : public EntityRenderer {
public:
	virtual ~MobRenderer();
	virtual void render(Entity&, const Vec3&, float, float);
	virtual void renderDebug(Entity&, Options&);
	virtual void renderLeash(Entity&, const Vec3&, float, float);
	virtual void prepareArmor(Mob&, ArmorSlot, float);
	virtual void prepareCarriedItem(Model&, Mob&, ItemInstance*);
	virtual void setupPosition(Entity&, const Vec3&, Matrix&);
	virtual void setupRotations(Entity&, float, float, Matrix&, float);
	virtual void getAttackAnim(Mob&, float);
	virtual void getBob(Mob&, float);
	virtual float getFlipDegrees(Mob&);
	virtual void scale(Mob&, Matrix&, float);
	virtual void additionalRendering(Model&, Mob&, float, float, float, float, float, float, float);
	virtual mce::TexturePtr& getSkinPtr(Entity&) const;
	
	MobRenderer(std::unique_ptr<Model>, mce::TexturePtr, float);
};