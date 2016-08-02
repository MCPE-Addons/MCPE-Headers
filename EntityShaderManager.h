#pragma once

class Entity;

class EntityShaderManager {
public:
	virtual ~EntityShaderManager();
	virtual void _getOverlayColor(Entity&, float);
	
	EntityShaderManager();
};