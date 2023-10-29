#ifndef SAVE_COMMAND_HPP
#define SAVE_COMMAND_HPP

#include "Command.hpp"

class SaveCommand : public Command
{
public:
    SaveCommand( const CommandParams& params ) : Command( params ) {}

public:
    void exec() override;
};

#endif // SAVE_COMMAND_HPP