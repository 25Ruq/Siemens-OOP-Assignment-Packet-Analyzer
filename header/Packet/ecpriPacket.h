#include "Packet.h"

class ecpriPacket : public Packet
{
private:
    std::string protocolVer;
    std::string seqId;
    std::string rtcId;
    std::string payloadSize;
    std::string msgType;

public:
    // virtual void accept(fileWriteVisitor & v) override{ v.writePacket(*this);}

    void setProtocolVer(const std::string &protocolVer);
    void setSeqId(const std::string &seqId);
    void setRtcId(const std::string &rtcId);
    void setPayloadSize(const std::string &payloadSize);
    void setMsgType(const std::string &msgType);

    std::string getProtocolVer() const;
    std::string getSeqId() const;
    std::string getRtcId() const;
    std::string getPayloadSize() const;
    std::string getMsgType() const;
};
