#pragma once

#include "BlockSourceListener.h"
#include "ParticleType.h"
#include "LevelEvent.h"

class EntityLocation;
class Vec3;
class Player;
class TextureData;
class LevelChunk;

class LevelListener : public BlockSourceListener {
public: 
	virtual ~LevelListener();
	virtual void allChanged();
	virtual void addParticle(ParticleType, Vec3 const &, Vec3 const &, int);
	virtual void playSound(Entity const &, EntityLocation, std::string const &, float, float);
	virtual void playSound(std::string const &, Vec3 const &, float, float);
	virtual void playMusic(std::string const &, Vec3 const &, float);
	virtual void playStreamingMusic(std::string const &, int, int, int);
	virtual void onEntityAdded(Entity &);
	virtual void onEntityRemoved(Entity &);
	virtual void onNewChunkFor(Player &, LevelChunk &);
	virtual void levelEvent(LevelEvent, Vec3 const &, int);
	virtual void takePicture(TextureData &, Entity *, Entity *, bool, std::string const &);
};