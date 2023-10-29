#ifndef LOAD_COMMAND_HPP
#define LOAD_COMMAND_HPP

#include "Command.hpp"

class LoadCommand : public Command
{
public:
    LoadCommand( const CommandParams& params ) : Command( params ) {}

public:
    void exec() override;
};

#endif // LOAD_COMMAND_HPP