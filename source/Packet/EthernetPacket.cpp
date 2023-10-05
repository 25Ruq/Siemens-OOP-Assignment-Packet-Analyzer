#include "../../header/Packet/EthernetPacket.h"

void EthernetPacket::accept(Visitor* fileWriteVisitor)
{
	fileWriteVisitor->writePacket(this);
}