#pragma once

class BlockSource;
class BlockPos;
class Random;

class Feature {
public:
	int featurefiller1;		// 4-8
	bool manuallyPlaced;	// 8-12
	
	virtual ~Feature();
	virtual void place(BlockSource&, const BlockPos&, Random&) const = 0;
	
	Feature(bool);
};