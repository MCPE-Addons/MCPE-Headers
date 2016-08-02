#pragma once

class MobFactory;

class Level {
public:
	MobFactory* getMobSpawner() const;
};