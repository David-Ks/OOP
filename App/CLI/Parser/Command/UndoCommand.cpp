#include "UndoCommand.hpp"
#include "../../../Director/Director.hpp"

namespace CLI
{

UndoCommand::UndoCommand( const Arguments& args )
    : Command( args ) {}

void UndoCommand::exec()
{
    Application::getDirector()->undo();
}

} // namespace CLI
