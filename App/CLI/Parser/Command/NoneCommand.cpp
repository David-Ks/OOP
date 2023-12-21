#include "NoneCommand.hpp"

namespace CLI
{

NoneCommand::NoneCommand( const Arguments& args )
    : Command( args ) {}

void NoneCommand::exec()
{
    throw InvalidCommandException( "Invalid Command." );
}

} // namespace CLI
