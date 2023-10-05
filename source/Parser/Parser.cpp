#include "../../header/Parser/Parser.h"

std::string Parser::getDestinationAddress()
{
    return rawPacket.substr(PacketFields::DST_ADDR_START, PacketFields::DST_ADDR_SIZE);
}

std::string Parser::getSourceAddress()
{
    return rawPacket.substr(PacketFields::SRC_ADDR_START, PacketFields::SRC_ADDR_SIZE);
}

std::string Parser::getCRC()
{
    int startIndex = rawPacket.size() - PacketFields::CRC_SIZE;
    return rawPacket.substr(startIndex);;
}

std::string Parser::getType()
{
    return rawPacket.substr(PacketFields::TYPE_START, PacketFields::TYPE_SIZE);
}

void Parser::setRawPacket(std::string rawPacket)
{
    this->rawPacket = rawPacket;
}

std::string Parser::getPacketType(std::string rawPacket)
{
    return rawPacket.substr(PacketFields::TYPE_START, PacketFields::TYPE_SIZE);
}