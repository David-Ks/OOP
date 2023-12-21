#include "RedoCommand.hpp"
#include "../../../Application.hpp"

namespace CLI
{

RedoCommand::RedoCommand( const Arguments& args )
    : Command( args ) {}

void RedoCommand::exec()
{
    Application::getInstance()->getDirector()->redo();
}

} // namespace CLI
