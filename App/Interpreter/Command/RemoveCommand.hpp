#ifndef REMOVE_COMMAND_HPP
#define REMOVE_COMMAND_HPP

#include "Command.hpp"

class RemoveCommand : public Command
{
public:
    RemoveCommand( const CommandParams& params ) : Command( params ) {}

public:
    void exec() override;
};

#endif // REMOVE_COMMAND_HPP