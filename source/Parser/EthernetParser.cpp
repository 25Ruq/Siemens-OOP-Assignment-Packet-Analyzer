#include "../../header/Parser/EthernetParser.h"

EthernetPacket* EthernetParser::getParsedPacket()  
{
    EthernetPacket* ethernetPacket = new EthernetPacket();

    ethernetPacket->setCrc(getCRC());
    ethernetPacket->setDstAddr(getDestinationAddress());
    ethernetPacket->setSrcAddr(getSourceAddress());
    ethernetPacket->setType(getType());
    ethernetPacket->setRawPacket(rawPacket);
    return ethernetPacket;
}
