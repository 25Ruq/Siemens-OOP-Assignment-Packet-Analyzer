#pragma once
#include <string>
#include "../../header/fileVisitor/Visitor.h"

class Packet
{
private:
    std::string packetLine;
    std::string dstAddr;
    std::string srcAddr;
    std::string crc;
    std::string type;

public:
    void setPacketLine(const std::string &packetLine);
    void setSrcAddr(const std::string &srcAddr);
    void setDstAddr(const std::string &dstAddr);
    void setType(const std::string &type);
    void setCrc(const std::string &crc);
    std::string getPacketLine() const;
    std::string getSrcAddr() const;
    std::string getDstAddr() const;
    std::string getType() const;
    std::string getCrc() const;
    virtual void accept(Visitor* fileWriteVisitor, int packetNumber) = 0;
};
