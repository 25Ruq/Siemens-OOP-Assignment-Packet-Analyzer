#include "../../header/Packet/ecpriPacket.h"

void ecpriPacket::setProtocolVer(const std::string &protocolVer)
{
    this->protocolVer = protocolVer;
}

void ecpriPacket::setSeqId(const std::string &seqId)
{
    this->seqId = seqId;
}

void ecpriPacket::setRtcId(const std::string &rtcId)
{
    this->rtcId = rtcId;
}

void ecpriPacket::setPayloadSize(const std::string &payloadSize)
{
    this->payloadSize = payloadSize;
}

void ecpriPacket::setMsgType(const std::string &msgType)
{
    this->msgType = msgType;
}

void ecpriPacket::setConcatenationIndicator(std::string concatenationIndicator)
{
    this->concatenationIndicator = concatenationIndicator;
}

std::string ecpriPacket::getProtocolVer() const
{
    return protocolVer;
}

std::string ecpriPacket::getSeqId() const
{
    return seqId;
}

std::string ecpriPacket::getRtcId() const
{
    return rtcId;
}

std::string ecpriPacket::getPayloadSize() const
{
    return payloadSize;
}

std::string ecpriPacket::getMsgType() const
{
    return msgType;
}

std::string ecpriPacket::getConcatenationIndicator() const
{
    return concatenationIndicator;
}

void ecpriPacket::accept(Visitor* fileWriteVisitor, int packetNumber)
{
    fileWriteVisitor->writePacket(this, packetNumber);
}