#include "DisplayCommand.hpp"

DisplayCommand::DisplayCommand( )
{
}

void DisplayCommand::exec()
{
}

void DisplayCommand::addParam( const std::string& name, const std::string& value )
{
    params[ name ] = value;
}