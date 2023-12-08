#include "ExitCommand.hpp"

namespace CLI
{

ExitCommand::ExitCommand( const Arguments& args )
    : Command( args ) {}

void ExitCommand::exec()
{
    Application::getController()->exit();
}

} // namespace CLI
