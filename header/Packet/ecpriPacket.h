#ifndef ECPRIPACKET_H
#define ECPRIPACKET_H

#include "Packet.h"
class Visitor; // forward declaration

class ecpriPacket : public Packet
{
private:
    std::string protocolVer;
    std::string seqId;
    std::string rtcId;
    std::string payloadSize;
    std::string msgType;
    std::string concatenationIndicator;

public:
    void setProtocolVer(std::string protocolVer);
    void setSeqId(std::string seqId);
    void setRtcId(std::string rtcId);
    void setPayloadSize(std::string payloadSize);
    void setMsgType(std::string msgType);
    void setConcatenationIndicator(std::string concatenationIndicator);

    std::string getProtocolVer();
    std::string getSeqId();
    std::string getRtcId();
    std::string getPayloadSize();
    std::string getMsgType();
    std::string getConcatenationIndicator();
    void accept(Visitor *fileWriteVisitor);
};
#endif