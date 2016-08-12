#pragma once

#include "ResourceLocation.h"

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
};