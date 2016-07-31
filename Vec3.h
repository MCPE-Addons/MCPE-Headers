#pragma once

class BlockPos;

// Size : 12
class Vec3 {
public:
	static const Vec3 ZERO, ONE, UINT_X, NEG_UNIT_X, UINT_Y, NEG_UNIT_Y, UINT_Z, NEG_UNIT_Z, MAX, MIN;

	float x, y, z;	// 0, 4, 8

	Vec3() : x(0), y(0), z(0) {}
	Vec3(float x, float y, float z) : x(x), y(y), z(z) {}
	Vec3(const BlockPos &);

	Vec3 operator-(const Vec3 &other) {
		return Vec3(x - other.x, y - other.y, z - other.z);
	}
};
