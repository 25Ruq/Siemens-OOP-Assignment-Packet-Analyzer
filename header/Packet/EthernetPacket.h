#pragma once
#include "../../header/Packet/Packet.h"

class EthernetPacket : public Packet
{
public:
    void accept(Visitor* fileWriteVisitor, int packetNumber);
};
