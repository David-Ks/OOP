#include "NoneCommand.hpp"

namespace CLI
{

NoneCommand::NoneCommand( const Arguments& args )
    : Command( args ) {}

void NoneCommand::exec()
{
    throw std::runtime_error( "Error: Invalid Command." );
}

} // namespace CLI
