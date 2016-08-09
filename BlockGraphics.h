#pragma once

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>
#include <json/json.h>

class BlockSource;
class BlockPos;
class AABB;
class Random;
class Vec3;
class TerrainTextureAtlas;

// Size : 324
class BlockGraphics {
public: 
	// Size : 24
	class SoundType {
	public:
		const float volume;				// 0
		const float pitch;				// 4
		const std::string stepSound;	// 8
		const std::string jumpSound;	// 12
		const std::string breakSound;	// 16
		const std::string placeSound;	// 20

		SoundType(const std::string &, float, float);
		SoundType(const std::string &, const std::string &, float, float);
		SoundType(const std::string &, const std::string &, const std::string &, float, float);

		float getVolume() const;
		float getPitch() const;

		const std::string &getStepSound() const;
		const std::string &getJumpSound() const;
		const std::string &getBreakSound() const;
		const std::string &getPlaceSound() const;
	};

	static const SoundType SOUND_NORMAL;
	static const SoundType SOUND_WOOD;
	static const SoundType SOUND_GRAVEL;
	static const SoundType SOUND_GRASS;
	static const SoundType SOUND_STONE;
	static const SoundType SOUND_METAL;
	static const SoundType SOUND_GLASS;
	static const SoundType SOUND_CLOTH;
	static const SoundType SOUND_SAND;
	static const SoundType SOUND_SILENT;
	static const SoundType SOUND_ANVIL;
	static const SoundType SOUND_LADDER;
	static const SoundType SOUND_SLIME;
	static const SoundType SOUND_SNOW;

	static std::unordered_map<std::string, BlockGraphics *> mBlockLookupMap;
	static BlockGraphics *mBlocks[];
	static std::vector<std::unique_ptr<BlockGraphics>> mOwnedBlocks;
	static TerrainTextureAtlas *mTerrainTextureAtlas;

	//vtable for BlockGraphics	// 0
	unsigned char id;			// 4
	char filler1[316];			// 8

	BlockGraphics(const std::string &);
	virtual ~BlockGraphics();
	virtual void shouldRenderFace(BlockSource &, BlockPos const &, signed char, AABB const &);
	virtual void getIconYOffset();
	virtual void getColor(int);
	virtual void getColor(BlockSource &, BlockPos const &);
	virtual void getColorForParticle(BlockSource &, BlockPos const &, int);
	virtual void isSeasonTinted(BlockSource &, BlockPos const &);
	virtual void prepareRender(BlockSource &, BlockPos const &);
	virtual void onGraphicsModeChanged(bool, bool);
	virtual void getRenderLayer(BlockSource &, BlockPos const &);
	virtual void getExtraRenderLayers();
	virtual void getVisualShape(BlockSource &, BlockPos const &, AABB &, bool);
	virtual void getVisualShape(unsigned char, AABB &, bool);
	virtual void getCarriedTexture(signed char, int);
	virtual void animateTick(BlockSource &, BlockPos const &, Random &);
	virtual void randomlyModifyPosition(BlockPos const &, int &);
	virtual void randomlyModifyPosition(BlockPos const &);
	virtual void setVisualShape(AABB const &);
	virtual void setVisualShape(Vec3 const &, Vec3 const &);
	virtual void setSoundType(SoundType const &);

	static void initBlocks();

	static void setTextures(BlockGraphics &, const Json::Value &);
	static void setCarriedTextures(BlockGraphics &, const Json::Value &);
	static void setTextureIsotropic(BlockGraphics &, const Json::Value &);
	static void setBlockShape(BlockGraphics &, const Json::Value &);
};