#include "../../header/Packet/EcpriPacket.h"

void ecpriPacket::setProtocolVersion(std::string protocolVersion)
{
    this->protocolVersion = protocolVersion;
}

void ecpriPacket::setSequenceId(std::string sequenceId)
{
    this->sequenceId = sequenceId;
}

void ecpriPacket::setRtcId(std::string rtcId)
{
    this->rtcId = rtcId;
}

void ecpriPacket::setPayloadSize(std::string payloadSize)
{
    this->payloadSize = payloadSize;
}

void ecpriPacket::setMessageType(std::string messageType)
{
    this->messageType = messageType;
}

void ecpriPacket::setConcatenationIndicator(std::string concatenationIndicator)
{
    this->concatenationIndicator = concatenationIndicator;
}

std::string ecpriPacket::getProtocolVersion()
{
    return protocolVer;
}

std::string ecpriPacket::getSequenceId()
{
    return seqId;
}

std::string ecpriPacket::getRtcId()
{
    return rtcId;
}

std::string ecpriPacket::getPayloadSize()
{
    return payloadSize;
}

std::string ecpriPacket::getMessageType()
{
    return msgType;
}

std::string ecpriPacket::getConcatenationIndicator()
{
    return concatenationIndicator;
}

void ecpriPacket::accept(Visitor* fileWriteVisitor)
{
    fileWriteVisitor->writePacket(this);
}