#pragma once

// Size : 32
class NameRegistry {
public:
	char filler1[32];	// 0

	NameRegistry(bool);
	bool hasEntry(std::string const &) const;
};