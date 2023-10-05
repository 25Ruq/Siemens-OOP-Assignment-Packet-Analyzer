#ifndef PACKET_H
#define PACKET_H

#include <string>
#include "../fileVisitor/visitor.h"

class Packet
{
private:
    std::string dstAddr;
    std::string srcAddr;
    std::string crc;
    std::string type;
    std::string rawPacket;

public:
    void setSrcAddr(std::string srcAddr);
    void setDstAddr(std::string dstAddr);
    void setType(std::string type);
    void setCrc(std::string crc);
    void setRawPacket(std::string rawPacket);
    std::string getSrcAddr();
    std::string getDstAddr();
    std::string getType();
    std::string getCrc();
    std::string getRawPacket();
    virtual void accept(Visitor *fileWriteVisitor) = 0;
};
#endif