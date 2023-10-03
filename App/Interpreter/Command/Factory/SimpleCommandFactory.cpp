#include "SimpleCommandFactory.hpp"

Command* SimpleCommandFactory::create( const CommandParams& params )
{
    const auto name = params.at( "name" );
    
    if ( name == "add" )
    {
        return new AddCommand( );
    }
    else if ( name == "remove" )
    {
        // do
    }
    else if ( name == "display" )
    {
        // do
    }
    else if ( name == "change" )
    {
        // do
    }
    else if ( name == "list" )
    {
        // do
    }
    else if ( name == "exit" )
    {
        // do
    }
    else if ( name == "save" )
    {
        // do
    }
    else if ( name == "load" )
    {
        // do
    }
}