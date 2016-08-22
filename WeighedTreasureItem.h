#pragma once

#include <vector>

class Random;
class Container;

class WeighedTreasureItem {
public:
	static void addChestItems(Random&, std::vector<WeighedTreasureItem> const&, Container&, int);
};