#include "../../header/Packet/Packet.h"

void Packet::setPacketLine(const std::string &packetLine)
{
    this->packetLine = packetLine;
}

void Packet::setSrcAddr(const std::string &srcAddr)
{
    this->srcAddr = srcAddr;
}

void Packet::setDstAddr(const std::string &dstAddr)
{
    this->dstAddr = dstAddr;
}

void Packet::setType(const std::string &type)
{
    this->type = type;
}

void Packet::setCrc(const std::string &crc)
{
    this->crc = crc;
}

std::string Packet::getPacketLine() const
{
    return packetLine;
}

std::string Packet::getSrcAddr() const
{
    return srcAddr;
}

std::string Packet::getDstAddr() const
{
    return dstAddr;
}

std::string Packet::getType() const
{
    return type;
}

std::string Packet::getCrc() const
{
    return crc;
}
