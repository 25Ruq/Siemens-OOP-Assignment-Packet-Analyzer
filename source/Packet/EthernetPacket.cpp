#include "../../header/Packet/EthernetPacket.h"

void EthernetPacket::accept(Visitor* fileWriteVisitor, int packetNumber)
{
	fileWriteVisitor->writePacket(this, packetNumber);
}