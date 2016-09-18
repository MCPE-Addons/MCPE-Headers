#pragma once

#include <string>

class ResourceLocation;
class TextureData;

class Resource {
public:
	static bool load(const ResourceLocation&, std::string&);
	static TextureData& loadTexture(const ResourceLocation&);
};