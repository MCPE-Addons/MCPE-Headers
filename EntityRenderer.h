#pragma once

#include "EntityShaderManager.h"

class Vec3;
class Options;
class Vec2;
namespace mce {
	class TextureGroup;
	class TexturePtr;
};

class EntityRenderer : public EntityShaderManager {
public:
	virtual ~EntityRenderer();
	virtual void render(Entity&, const Vec3&, float, float) = 0;
	virtual void postRender(Entity&, const Vec3&, float, float);
	virtual void renderDebug(Entity&, Options&);
	virtual void renderLeash(Entity&, const Vec3&, float, float);
	virtual void renderWaterHole(Entity&, const Vec3&, const Vec2&, float);
	
	EntityRenderer(mce::TextureGroup&, bool);
};