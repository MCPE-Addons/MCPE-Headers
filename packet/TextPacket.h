#pragma once

#include <string>

#include "Packet.h"

enum class TextPacketType : char {
	RAW,
	CHAT,
	TRANSLATION,
	POPUP,
	TIP,
	SYSTEM
};

class TextPacket : public Packet {
public: 
	TextPacketType type;	// 12
	char filler1[4];		// 16
	std::string str;		// 20

	virtual ~TextPacket();
	virtual int getId() const;
	virtual void write(RakNet::BitStream *) const;
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *) const;
};