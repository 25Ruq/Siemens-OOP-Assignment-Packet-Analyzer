#include "../../header/Packet/Packet.h"

void Packet::setPacketLine( std::string packetLine)
{
    this->packetLine = packetLine;
}

void Packet::setSrcAddr( std::string srcAddr)
{
    this->srcAddr = srcAddr;
}

void Packet::setDstAddr( std::string dstAddr)
{
    this->dstAddr = dstAddr;
}

void Packet::setType( std::string type)
{
    this->type = type;
}

void Packet::setCrc( std::string crc)
{
    this->crc = crc;
}

std::string Packet::getPacketLine() 
{
    return packetLine;
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
