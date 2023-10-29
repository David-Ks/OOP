#ifndef DISPLAY_COMMAND_HPP
#define DISPLAY_COMMAND_HPP

#include "Command.hpp"

class DisplayCommand : public Command
{
public:
    DisplayCommand( const CommandParams& params ) : Command( params ) {}

public:
    void exec() override;
};

#endif // DISPLAY_COMMAND_HPP