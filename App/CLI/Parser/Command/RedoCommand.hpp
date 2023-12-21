#ifndef REDO_COMMAND_HPP
#define REDO_COMMAND_HPP

#include "Command.hpp"

namespace CLI
{

class RedoCommand : public Command
{
public:
    RedoCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI


#endif // REDO_COMMAND_HPP