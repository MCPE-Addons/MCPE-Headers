#pragma once

#include "BlockPos.h"
#include "CommonTypes.h"
#include "Vec3.h"

class Facing {

public:
	enum class Name : FacingID {
		DOWN, UP, NORTH, SOUTH, WEST, EAST
	};

	static const Facing::Name DIRECTIONS[6];
	static const BlockPos DIRECTION[6];
	static const Vec3 NORMAL[6];
	static const Facing::Name BY2DDATA[4];

	static FacingID getClockwise(signed char);

	static const int OPPOSITE_FACING[6];
	static const int STEP_X[6];
	static const int STEP_Y[6];
	static const int STEP_Z[6];

};
