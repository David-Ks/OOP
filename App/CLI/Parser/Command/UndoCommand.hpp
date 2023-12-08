#ifndef UNDO_COMMAND_HPP
#define UNDO_COMMAND_HPP

#include "Command.hpp"

namespace CLI
{

class UndoCommand : public Command
{
public:
    UndoCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI


#endif // UNDO_COMMAND_HPP