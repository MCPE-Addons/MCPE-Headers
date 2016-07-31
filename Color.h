#pragma once

class Color {
public:
	static const Color BLACK;
	static const Color BLUE;
	static const Color CYAN;
	static const Color GREEN;
	static const Color GREY;
	static const Color NIL;
	static const Color PURPLE;
	static const Color RED;
	static const Color WHITE;
	static const Color YELLOW;
	static const Color SHADE_DOWN;
	static const Color SHADE_NORTH_SOUTH;
	static const Color SHADE_UP;
	static const Color SHADE_WEST_EAST;

	float r, g, b, a;		// 0, 4, 8, 12

	Color(float r, float g, float b, float a) : r(r), g(g), b(b), a(a) {};

	static Color *fromHSB(float, float, float);
};
