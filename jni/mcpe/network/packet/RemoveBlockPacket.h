#pragma once

#include "../Packet.h"

class RemoveBlockPacket : public Packet
{
public:
	virtual ~RemoveBlockPacket();
	virtual int getId() const;
	virtual void write(RakNet::BitStream *) const;
	virtual void read(RakNet::BitStream *);
	virtual void handle(const RakNet::RakNetGUID &, NetEventCallback *) const;
};
