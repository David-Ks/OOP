#include "CommandFactory.hpp"

namespace CLI
{

std::unique_ptr< Command > CommandFactory::create( const std::string& name, const Command::Arguments& args )
{
    if ( name == "add" )
    {
        return std::make_unique< AddCommand >( args );
    }
    else if ( name == "undo" )
    {
        return std::make_unique< UndoCommand >( args );
    }
    else if ( name == "redo" )
    {
        return std::make_unique< RedoCommand >( args );
    }
    else if ( name == "exit" )
    {
        return std::make_unique< ExitCommand >( args );
    }
    else if ( name == "list" )
    {
        return std::make_unique< ListCommand >( args );
    }
    else if ( name == "display" )
    {
        return std::make_unique< DisplayCommand >( args );
    }

    return std::make_unique< NoneCommand >( args );
}

} // namespace CLI
