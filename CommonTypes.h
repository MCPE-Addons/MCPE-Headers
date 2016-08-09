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
typedef int_fast8_t FacingID;

struct BlockID : NewType<unsigned char> {
	static const BlockID AIR;

	BlockID(const unsigned char &id) { value = id; }
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

struct Brightness : NewType<unsigned char> {
	static const Brightness INVALID, MIN, MAX;

	Brightness(const unsigned char &id) { value = id; }
};

struct GlobalPermissionsLevel : NewType<int> {};
struct UserPermissionsLevel : NewType<int> {};