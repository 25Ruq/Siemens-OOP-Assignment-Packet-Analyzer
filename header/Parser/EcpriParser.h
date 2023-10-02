
#include "Parser.h"
#include <string>

class EcpriParser : public Parser
{
private:
    std::string getConcatenationIndicator();
    std::string getMessageType();
    std::string getPayloadSize();
    std::string getProtocolVersion();
    std::string getSequenceId();
    std::string getRtcId();

public:
    // eCRPIFrame *getParsedFrame() override;
};
