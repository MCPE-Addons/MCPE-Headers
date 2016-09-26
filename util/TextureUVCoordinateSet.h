#pragma once

#include "../util/ResourceLocation.h"

// Size: 28
class TextureUVCoordinateSet {
public:
	float x;					// 0-4
	float y;					// 4-8
	float x1;					// 8-12
	float y1;					// 12-16
	unsigned short width;		// 16-18
	unsigned short height;		// 18-20
	ResourceLocation location;	// 20-28
	
	TextureUVCoordinateSet();
	TextureUVCoordinateSet(float, float, float, float, unsigned short, unsigned short, ResourceLocation);
	
	bool operator==(const TextureUVCoordinateSet& tex) const {
		return this->x == tex.x && this->y == tex.y && this->x1 == tex.x1 && this->y1 == tex.y1 && this->width == tex.width && this->height == tex.height && this->location == tex.location;
	}
};
