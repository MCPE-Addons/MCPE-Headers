#pragma once

#include "Block.h"

// Size : 124
class ButtonBlock : public Block {
public: 
	char filler3[4];	// 120

	ButtonBlock(std::string const &, int, bool);
	virtual ~ButtonBlock();
	virtual void tick(BlockSource &, BlockPos const &, Random &);
	virtual void getCollisionShape(AABB &, BlockSource &, BlockPos const &, Entity *);
	virtual void isInteractiveBlock();
	virtual void isRedstoneBlock();
	virtual void onPlace(BlockSource &, BlockPos const &);
	virtual void onRedstoneUpdate(BlockSource &, BlockPos const &, int, bool);
	virtual void onLoaded(BlockSource &, BlockPos const &);
	virtual void mayPlace(BlockSource &, BlockPos const &, signed char);
	virtual void mayPlace(BlockSource &, BlockPos const &);
	virtual void neighborChanged(BlockSource &, BlockPos const &, BlockPos const &);
	virtual void getResource(Random &, int, int);
	virtual void getResourceCount(Random &, int, int);
	virtual void asItemInstance(BlockSource &, BlockPos const &, int);
	virtual void use(Player &, BlockPos const &);
	virtual void getPlacementDataValue(Mob &, BlockPos const &, signed char, Vec3 const &, int);
	virtual void isAttachedTo(BlockSource &, BlockPos const &, BlockPos &);
	virtual void entityInside(BlockSource &, BlockPos const &, Entity &);
	virtual void getVisualShape(unsigned char, AABB &, bool);
	virtual void getVariant(int);
	virtual void getSpawnResourcesAuxValue(unsigned char);
};