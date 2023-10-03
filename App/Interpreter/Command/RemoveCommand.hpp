#ifndef REMOVE_COMMAND_HPP
#define REMOVE_COMMAND_HPP

#include "Command.hpp"

class RemoveCommand : public Command
{
public:
    void exec() override;
    void addParam( const std::string& name, const std::string& value ) override;
};

#endif // REMOVE_COMMAND_HPP