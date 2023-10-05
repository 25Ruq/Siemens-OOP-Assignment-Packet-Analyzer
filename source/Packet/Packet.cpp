#include "../../header/Packet/Packet.h"


void Packet::setSourceAddress(std::string sourceAddress)
{
    this->sourceAddress = sourceAddress;
}

void Packet::setDestinationAddress(std::string destinationAddress)
{
    this->destinationAddress = destinationAddress;
}

void Packet::setType(std::string type)
{
    this->type = type;
}

void Packet::setCRC(std::string crc)
{
    this->crc = crc;
}
void Packet::setRawPacket(std::string rawPacket)
{
    this->rawPacket = rawPacket;
}

std::string Packet::getSourceAddress()
{
    return sourceAddress;
}

std::string Packet::getDestinationAddress()
{
    return destinationAddress;
}

std::string Packet::getType()
{
    return type;
}

std::string Packet::getCRC()
{
    return crc;
}

std::string Packet::getRawPacket()
{
    return rawPacket;
}
