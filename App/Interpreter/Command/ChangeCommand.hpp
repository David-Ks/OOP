#ifndef CHANGE_COMMAND_HPP
#define CHANGE_COMMAND_HPP

#include "Command.hpp"

class ChangeCommand : public Command
{
public:
    ChangeCommand( const CommandParams& params ) : Command( params ) {}

public:
    void exec() override;
};

#endif // CHANGE_COMMAND_HPP