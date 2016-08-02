#pragma once

#include "DimensionId.h"

class Block;
class BlockPos;
class Dimension;
class Level;

class BlockSource {
public:
	Block* getBlock(const BlockPos&);
	Block* getBlock(int, int, int);
	unsigned char getBlockID(const BlockPos&);
	unsigned char getBlockID(int, int, int);
	DimensionId getDimensionId() const;
	Dimension* getDimension();
	Level* getLevel();
};