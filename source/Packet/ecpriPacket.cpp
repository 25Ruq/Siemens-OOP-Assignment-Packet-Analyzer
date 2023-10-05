#include "../../header/Packet/EcpriPacket.h"

void EcpriPacket::setProtocolVersion(std::string protocolVersion)
{
    this->protocolVersion = protocolVersion;
}

void EcpriPacket::setSequenceId(std::string sequenceId)
{
    this->sequenceId = sequenceId;
}

void EcpriPacket::setRtcId(std::string rtcId)
{
    this->rtcId = rtcId;
}

void EcpriPacket::setPayloadSize(std::string payloadSize)
{
    this->payloadSize = payloadSize;
}

void EcpriPacket::setMessageType(std::string messageType)
{
    this->messageType = messageType;
}

void EcpriPacket::setConcatenationIndicator(std::string concatenationIndicator)
{
    this->concatenationIndicator = concatenationIndicator;
}

std::string EcpriPacket::getProtocolVersion()
{
    return protocolVer;
}

std::string EcpriPacket::getSequenceId()
{
    return seqId;
}

std::string EcpriPacket::getRtcId()
{
    return rtcId;
}

std::string EcpriPacket::getPayloadSize()
{
    return payloadSize;
}

std::string EcpriPacket::getMessageType()
{
    return msgType;
}

std::string EcpriPacket::getConcatenationIndicator()
{
    return concatenationIndicator;
}

void EcpriPacket::accept(Visitor* fileWriteVisitor)
{
    fileWriteVisitor->writePacket(this);
}
