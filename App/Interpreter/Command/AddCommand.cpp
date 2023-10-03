#include "AddCommand.hpp"

AddCommand::AddCommand( )
{
}

void AddCommand::exec()
{
}

void AddCommand::addParam( const std::string& name, const std::string& value )
{
    params[ name ] = value;
}