#pragma once

class Mob;
class Entity;

class Sensing {
public:
	Sensing(const Mob&);
	
	bool canSee(const Entity&);
};