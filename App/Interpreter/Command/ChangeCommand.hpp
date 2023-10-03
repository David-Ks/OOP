#ifndef CHANGE_COMMAND_HPP
#define CHANGE_COMMAND_HPP

#include "Command.hpp"

class ChangeCommand : public Command
{
public:
    void exec() override;
    void addParam( const std::string& name, const std::string& value ) override;
};

#endif // CHANGE_COMMAND_HPP