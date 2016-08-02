#pragma once
 
#include <string>

class Feature;
class Random;
class BlockPos;
class BlockSource;
class BlockSource;
class LevelChunk;

// Size: 156; most return types thanks to @byteandahalf
class Biome {
public:
	char biomefiller1[56];			// 4-56
	std::string name;				// 56-60
	char biomefiller2[156 - 60];	// 60-156
	
	enum class BiomeType : int {
		Beach,
		Desert,
		ExtremeHills,
		Flat,
		Forest,
		Hell,
		Ice,
		Jungle,
		Mesa,
		MushroomIsland,
		Ocean,
		Plain,
		River,
		Savanna,
		StoneBeach,
		Swamp,
		Taiga,
		TheEnd
	};
	
	enum class BiomeTempCategory : int {
		OCEAN,
		COLD,
		MEDIUM,
		WARM
	};
	
	virtual void setColor(int);
	virtual void setColor(int, bool);
	virtual ~Biome();
	virtual Feature* getTreeFeature(Random*);
	virtual Feature* getGrassFeature(Random*);
	virtual float getTemperature();
	virtual float adjustDepth(float);
	virtual void* getSkyColor(float);
	virtual void* getMobs(EntityType);
	virtual float getCreatureProbability();
	virtual int getFoliageColor();
	virtual void* getRandomFlowerTypeAndData(Random&, const BlockPos&);
	virtual void decorate(BlockSource*, Random&, const BlockPos&, bool, float);
	virtual void buildSurfaceAt(Random&, LevelChunk&, const BlockPos&, float, short);
	virtual int getGrassColor(const BlockPos&);
	virtual void refreshBiome(unsigned int);
	virtual Biome::BiomeTempCategory getTemperatureCategory() const;
	virtual bool isSame(Biome*);
	virtual bool isHumid();
	virtual Biome* createMutatedCopy(int);
	
	Biome::BiomeType getBiomeType();
	
	static const Biome& getBiome(int);
	
	static Biome* hell;
};