#ifndef NULL_COMMAND_HPP
#define NULL_COMMAND_HPP

#include "Command.hpp"

class NullCommand : public Command
{
public:
    NullCommand() : Command( {} ) {}

public:
    void exec() override;
};

#endif // NULL_COMMAND_HPP