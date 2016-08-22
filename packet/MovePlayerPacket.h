#pragma once

#include "Packet.h"
#include "../CommonTypes.h"
#include "../Vec3.h"
#include "../Vec2.h"
#include "Player.h"

// Size : 56
class MovePlayerPacket : public Packet {
public: 
	char filler1[4];			// 12
	EntityUniqueID uniqueID;	// 16
	Vec3 pos;					// 24
	Vec2 rot;					// 36
	float yaw;					// 44
	Player::PositionMode mode;	// 48
	bool onGround;				// 49
	char filler2[4];			// 52

	virtual int getId() const;
	virtual void write(RakNet::BitStream *) const;
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *) const;
};