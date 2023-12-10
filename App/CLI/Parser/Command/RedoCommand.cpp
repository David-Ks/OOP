#include "RedoCommand.hpp"
#include "../../../Director/Director.hpp"

namespace CLI
{

RedoCommand::RedoCommand( const Arguments& args )
    : Command( args ) {}

void RedoCommand::exec()
{
    Application::getDirector()->redo();
}

} // namespace CLI
