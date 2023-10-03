#ifndef LOAD_COMMAND_HPP
#define LOAD_COMMAND_HPP

#include "Command.hpp"

class LoadCommand : public Command
{
public:
    void exec() override;
    void addParam( const std::string& name, const std::string& value ) override;
};

#endif // LOAD_COMMAND_HPP