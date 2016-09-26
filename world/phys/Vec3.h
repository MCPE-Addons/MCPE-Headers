#pragma once

#include <string>

class BlockPos;
class Pos;

// Size : 12
class Vec3 {

public:
	static const Vec3 ZERO, ONE, UINT_X, NEG_UNIT_X, UINT_Y, NEG_UNIT_Y, UINT_Z, NEG_UNIT_Z, MAX, MIN;

	float x, y, z;	// 0, 4, 8

	Vec3() : x(0), y(0), z(0) {}
	Vec3(const Vec3 &other) : x(other.x), y(other.y), z(other.z) {}
	Vec3(float x, float y, float z) : x(x), y(y), z(z) {}
	Vec3(const BlockPos &);
	Vec3(const Pos &);

	static Vec3 directionFromRotation(const Vec2 &);
	static Vec3 directionFromRotation(float, float);
	static Vec2 rotationFromDirection(const Vec3 &);
	static Vec2 rotationFromPoints(Vec3 const &, Vec3 const &);

	void clamp(const Vec3 &, const Vec3 &, const Vec3 &);
	void clampAlongNormal(const Vec3 &, const Vec3 &, const Vec3 &);
	float maxComponent() const;
	float minComponent() const;
	std::string toString() const;
	Vec2 xz() const;


	Vec3 operator+(const Vec3 &other) const {
		return Vec3(x + other.x, y + other.y, z + other.z);
	}
	void operator+=(const Vec3 &other) {
		x += other.x;
		y += other.y;
		z += other.z;
	}

	Vec3 operator-(const Vec3 &other) const {
		return Vec3(x - other.x, y - other.y, z - other.z);
	}

	void operator-=(const Vec3 &other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;
	}

	Vec3 operator*(const float value) const {
		return Vec3(x * value, y * value, z * value);
	}

	void operator*=(const float value) {
		x *= value;
		y *= value;
		z *= value;
	}

	Vec3 operator/(const float value) const {
		return Vec3(x / value, y / value, z / value);
	}

	void operator/=(const float value) {
		x /= value;
		y /= value;
		z /= value;
	}

	Vec3 operator-() const {
		return Vec3(-x, -y, -z);
	}

};
