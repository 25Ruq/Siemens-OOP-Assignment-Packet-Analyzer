class PacketFields
{
public:
    static const int DST_ADDR_START = 16;
    static const int DST_ADDR_SIZE = 12;

    static const int SRC_ADDR_START = 28;
    static const int SRC_ADDR_SIZE = 12;

    static const int CRC_SIZE = 8;

    static const int TYPE_START = 40;
    static const int TYPE_SIZE = 4;

    static const int PAYLOAD_START = 48;
    static const int PAYLOAD_SIZE = 4;

    static const int PROTOCOL_VER_START = 44;
    static const int PROTOCOL_VER_SIZE = 1;

    static const int SEQ_ID_START = 56;
    static const int SEQ_ID_SIZE = 4;

    static const int MSG_TYPE_START = 46;
    static const int MSG_TYPE_SIZE = 2;

    static const int RTC_ID_START = 52;
    static const int RTC_ID_SIZE = 4;

    static const int CONCATENATION_INDICATOR_START = 45;
    static const int CONCATENATION_INDICATOR_SIZE = 1;
};