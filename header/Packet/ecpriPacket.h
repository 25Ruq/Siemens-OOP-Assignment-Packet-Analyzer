#ifndef ECPRIPACKET_H
#define ECPRIPACKET_H

#include "Packet.h"
class Visitor; // forward declaration

class EcpriPacket : public Packet
{
private:
    std::string protocolVersion;
    std::string sequenceId;
    std::string rtcId;
    std::string payloadSize;
    std::string messageType;
    std::string concatenationIndicator;

public:
    void setProtocolVersion(std::string protocolVersion);
    void setSequenceId(std::string sequenceId);
    void setRtcId(std::string rtcId);
    void setPayloadSize(std::string payloadSize);
    void setMessageType(std::string messageType);
    void setConcatenationIndicator(std::string concatenationIndicator);

    std::string getProtocolVersion();
    std::string getSequenceId();
    std::string getRtcId();
    std::string getPayloadSize();
    std::string getMessageType();
    std::string getConcatenationIndicator();
    void accept(Visitor*);
};
#endif
