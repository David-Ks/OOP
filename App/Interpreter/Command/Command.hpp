#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <map>

class Command
{
public:
    virtual ~Command() {}
    virtual void exec() = 0;
    virtual void addParam( const std::string& name, const std::string& value ) = 0;
};

using CommandParams = std::map< std::string, std::string >;

const std::vector< std::string > 
    commandList {
        "ADD",
        "CHANGE",
        "DISPLAY",
        "EXIT",
        "LOAD",
        "REMOVE",
        "SAVE"
};

#endif // COMMAND_HPP