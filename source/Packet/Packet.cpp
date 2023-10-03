#include "../../header/Packet/Packet.h"


void Packet::setSrcAddr(std::string srcAddr)
{
    this->srcAddr = srcAddr;
}

void Packet::setDstAddr(std::string dstAddr)
{
    this->dstAddr = dstAddr;
}

void Packet::setType(std::string type)
{
    this->type = type;
}

void Packet::setCrc(std::string crc)
{
    this->crc = crc;
}
void Packet::setRawPacket(std::string rawPacket)
{
    this->rawPacket = rawPacket;
}


std::string Packet::getSrcAddr()
{
    return srcAddr;
}

std::string Packet::getDstAddr()
{
    return dstAddr;
}

std::string Packet::getType()
{
    return type;
}

std::string Packet::getCrc()
{
    return crc;
}

std::string Packet::getRawPacket()
{
    return rawPacket;
}
