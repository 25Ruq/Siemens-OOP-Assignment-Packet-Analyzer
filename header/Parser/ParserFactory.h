
#include <string>
#include "Parser.h"


class ParserFactory
{
private:
    static std::string ethernetFrameType;
    static std::string ecpriFrameType;

public:
    static Parser *getParser(std::string packetType);
};
