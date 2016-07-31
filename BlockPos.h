#pragma once

class ChunkPos;
class Vec3;

// Size : 12
class BlockPos {
public:
	int x, y, z;	// 0, 4, 8

	BlockPos() : x(0), y(0), z(0) {}
	BlockPos(int x, int y, int z) : x(x), y(y), z(z) {}
	BlockPos(const ChunkPos &, int);
	BlockPos(const Vec3 &);
	BlockPos(float, float, float);
	void neighbor(signed char) const;
	void relative(signed char, int) const;
};
