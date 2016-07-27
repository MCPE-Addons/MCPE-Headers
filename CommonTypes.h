#pragma once

#include <memory>
#include <vector>
#include <unordered_set>

#include "NewType.h"
#include "BlockProperty.h"

class Entity;
class Player;

typedef std::vector<Entity *> EntityList;
typedef std::unordered_set<Player *> PlayerList;

typedef long unsigned int RandomSeed;

typedef uint_fast8_t Height;
typedef uint_fast8_t Brightness;
typedef int_fast8_t FacingID;

struct BlockID : public NewType<unsigned char> {
	static const BlockID AIR;

	BlockID(const uint_fast8_t &id) {
		value = id;
	}

	bool hasProperty(BlockProperty) const;
};

typedef uint_fast8_t DataID;

struct FullBlock {
	static const FullBlock AIR;

	BlockID id;		// 0
	DataID data;	// 4

	FullBlock() : id(0), data(0) {}
	FullBlock(BlockID id) : id(id), data(0) {}
	FullBlock(BlockID id, DataID data) : id(id), data(data) {}
};