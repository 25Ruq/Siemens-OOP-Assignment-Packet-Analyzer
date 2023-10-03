cmake_minimum_required(VERSION 3.24)
project(Siemens_OOP_Assignment_Packet_Analyzer)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(header)
include_directories(header/fileVisitor)
include_directories(header/Packet)
include_directories(header/Parser)
include_directories(main)
include_directories(source)

add_executable(Siemens_OOP_Assignment_Packet_Analyzer
        header/fileVisitor/fileWriteVisitor.h
        header/fileVisitor/visitor.h
        header/Packet/ecpriPacket.h
        header/Packet/EthernetPacket.h
        header/Packet/Packet.h
        header/Parser/EcpriParser.h
        header/Parser/EthernetParser.h
        header/Parser/Parser.h
        header/Parser/ParserFactory.h
        main/main.cpp
        source/fileVisitor/fileWriteVisitor.cpp
        source/fileVisitor/visitor.cpp
        source/Packet/ecpriPacket.cpp
        source/Packet/EthernetPacket.cpp
        source/Packet/Packet.cpp
        source/Parser/EcpriParser.cpp
        source/Parser/EthernetParser.cpp
        source/Parser/Parser.cpp
        source/Parser/ParserFactory.cpp)
