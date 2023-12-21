#include "UndoCommand.hpp"
#include "../../../Application.hpp"

namespace CLI
{

UndoCommand::UndoCommand( const Arguments& args )
    : Command( args ) {}

void UndoCommand::exec()
{
    Application::getInstance()->getDirector()->undo();
}

} // namespace CLI
