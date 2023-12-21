#include "ExitCommand.hpp"
#include "../../Controller.hpp"

namespace CLI
{

ExitCommand::ExitCommand( const Arguments& args )
    : Command( args ) {}

void ExitCommand::exec()
{
    Application::getInstance()->getController()->exit();
}

} // namespace CLI
