#pragma once

#include "DimensionId.h"
#include "CommonTypes.h"

class Block;
class BlockPos;
class Dimension;
class Level;

class BlockSource {
public:
	Block *getBlock(const BlockPos &);
	Block *getBlock(int, int, int);

	BlockID getBlockID(const BlockPos &);
	BlockID getBlockID(int, int, int);

	FullBlock getBlockAndData(const BlockPos &);
	FullBlock getBlockAndData(int, int, int);

	DimensionId getDimensionId() const;
	Dimension *getDimension();

	Level *getLevel();
};