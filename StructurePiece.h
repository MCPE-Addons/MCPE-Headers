#pragma once

#include <vector>
#include <memory>

class StructurePiece;
class Random;
class BlockSource;
class BoundingBox;
class FullBlock;
class WeighedTreasureItem;
class CompoundTag;

class StructurePiece {
public:
	virtual ~StructurePiece();
	virtual void addChildren(StructurePiece*, std::vector<std::unique_ptr<StructurePiece>>&, Random&);
	virtual void postProcess(BlockSource*, Random&, const BoundingBox&) = 0;
	virtual void postProcessMobsAt(BlockSource*, Random&, const BoundingBox&);
	virtual void createTag();
	virtual void placeBlock(BlockSource*, FullBlock, int, int, int, const BoundingBox&);
	virtual void generateBox(BlockSource*, const BoundingBox&, int, int, int, int, int, int, FullBlock, FullBlock, bool);
	virtual void fillColumnDown(BlockSource*, FullBlock, int, int, int, const BoundingBox&);
	virtual void createChest(BlockSource*, const BoundingBox&, Random&, int, int, int, int, std::vector<WeighedTreasureItem> const&, int);
	virtual void createDispenser(BlockSource*, const BoundingBox&, Random&, int, int, int, int, std::vector<WeighedTreasureItem> const&, int);
	virtual void createDoor(BlockSource*, const BoundingBox&, Random&, int, int, int, int);
	virtual void addAdditionalSaveData(CompoundTag&) = 0;
	virtual void readAdditionalSaveData(CompoundTag&) = 0;
	
	int getWorldX(int, int);
	int getWorldY(int);
	int getWorldZ(int, int);
};