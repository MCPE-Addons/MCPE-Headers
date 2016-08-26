#pragma once

#include "CommonTypes.h"

class Direction {

public:
	static const int UNDEFINED = 255;
	static const int SOUTH = 0;
	static const int WEST = 1;
	static const int NORTH = 2;
	static const int EAST = 3;

	/* convert Direction -> FacingID */
	static const FacingID DIRECTION[4];
	/* convert FacingID -> Direction */
	static const int FACING_DIRECTION[6];

	static const int DIRECTION_OPPOSITE[4];
	static const int DIRECTION_CLOCKWISE[4];
	static const int DIRECTION_COUNTER_CLOCKWISE[4];
	static const FacingID RELATIVE_DIRECTION_FACING[4][6];

	static const int STEP_X[4];
	static const int STEP_Z[4];

	static int getDirection(float yaw, float pitch);
	static int getDirection(int, int, int, int);

};
