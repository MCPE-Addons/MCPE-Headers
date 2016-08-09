#pragma once

enum class MaterialType : int { Normal, Gas, Liquid, Decoration, Portal }; // 0 ~ 34

class Material {
public:
	class Settings;

	static Material *mMaterials[];

	Material(MaterialType, Material::Settings, float);

	static Material *getMaterial(MaterialType);
};