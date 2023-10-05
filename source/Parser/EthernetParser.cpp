#include "../../header/Parser/EthernetParser.h"

EthernetPacket* EthernetParser::getParsedPacket()  
{
    EthernetPacket* ethernetPacket = new EthernetPacket();

    ethernetPacket->setCRC(getCRC());
    ethernetPacket->setDestinationAddress(getDestinationAddress());
    ethernetPacket->setSourceAddress(getSourceAddress());
    ethernetPacket->setType(getType());
    ethernetPacket->setRawPacket(rawPacket);
    return ethernetPacket;
}
