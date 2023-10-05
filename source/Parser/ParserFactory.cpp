#include "../../header/Parser/ParserFactory.h"

std::string ParserFactory::ethernetPacketType = "88F7";
std::string ParserFactory::ecpriPacketType = "AEFE";

Parser* ParserFactory::getParser(std::string packetType)
{
    if (packetType == ethernetPacketType)
    {
        return new EthernetParser();
    }
    else if (packetType == ecpriPacketType)
    {
        return new EcpriParser();
    }
    return nullptr;
}
