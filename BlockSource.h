#pragma once

#include "DimensionId.h"
#include "CommonTypes.h"

class Block;
class BlockPos;
class Dimension;
class Level;
class BlockEntity;

class BlockSource {
public:
	void setBlock(const BlockPos &, BlockID, int);
	void setBlock(int, int, int, BlockID, int);

	void setBlockAndData(int, int, int, BlockID, DataID, int);
	void setBlockAndData(int, int, int, FullBlock, int);
	void setBlockAndData(const BlockPos &, BlockID, DataID, int);
	void setBlockAndData(const BlockPos &, FullBlock, int);
	void setBlockAndData(const BlockPos &, FullBlock, int, std::unique_ptr<BlockEntity>);

	void setBlockNoUpdate(int, int, int, BlockID);
	void setBlockAndDataNoUpdate(int, int, int, FullBlock);

	Block *getBlock(const BlockPos &);
	Block *getBlock(int, int, int);

	BlockID getBlockID(const BlockPos &);
	BlockID getBlockID(int, int, int);

	FullBlock getBlockAndData(const BlockPos &);
	FullBlock getBlockAndData(int, int, int);

	DimensionId getDimensionId() const;
	Dimension *getDimension();

	Level *getLevel();
	Level *getLevel() const;
	Level *getLevelConst() const;

	bool hasBlock(int, int, int);
	bool hasBlock(BlockPos const &);
};