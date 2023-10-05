#ifndef ETHERNET_PACKET_H
#define ETHERNET_PACKET_H

#include "Packet.h"
class Visitor; // forward declaration

class EthernetPacket : public Packet
{
public:
    void accept(Visitor *fileWriteVisitor);
};

#endif
