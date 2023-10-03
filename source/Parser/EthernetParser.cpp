#include "../../header/Parser/EthernetParser.h"

EthernetPacket *EthernetParser::getParsedPacket()
{
    EthernetPacket *ethernetPacket = new EthernetPacket();

    ethernetPacket->setCrc(this->getCRC());
    ethernetPacket->setDstAddr(this->getDestinationAddress());
    ethernetPacket->setSrcAddr(this->getSourceAddress());
    ethernetPacket->setType(this->getType());
    ethernetPacket->setRawPacket(this->rawPacket);
    return ethernetPacket;
}
