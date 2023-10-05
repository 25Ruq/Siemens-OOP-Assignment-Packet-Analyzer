#include "../../header/Packet/ecpriPacket.h"

void ecpriPacket::setProtocolVer(std::string protocolVer)
{
    this->protocolVer = protocolVer;
}

void ecpriPacket::setSeqId(std::string seqId)
{
    this->seqId = seqId;
}

void ecpriPacket::setRtcId(std::string rtcId)
{
    this->rtcId = rtcId;
}

void ecpriPacket::setPayloadSize(std::string payloadSize)
{
    this->payloadSize = payloadSize;
}

void ecpriPacket::setMsgType(std::string msgType)
{
    this->msgType = msgType;
}

void ecpriPacket::setConcatenationIndicator(std::string concatenationIndicator)
{
    this->concatenationIndicator = concatenationIndicator;
}

std::string ecpriPacket::getProtocolVer()
{
    return this->protocolVer;
}

std::string ecpriPacket::getSeqId()
{
    return this->seqId;
}

std::string ecpriPacket::getRtcId()
{
    return this->rtcId;
}

std::string ecpriPacket::getPayloadSize()
{
    return this->payloadSize;
}

std::string ecpriPacket::getMsgType()
{
    return this->msgType;
}

std::string ecpriPacket::getConcatenationIndicator()
{
    return this->concatenationIndicator;
}

void ecpriPacket::accept(Visitor *fileWriteVisitor)
{
    fileWriteVisitor->writePacket(this);
}