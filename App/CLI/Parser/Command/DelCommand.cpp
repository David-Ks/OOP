#include "DelCommand.hpp"
#include "../../../Director/Director.hpp"
#include "../../../Director/Actions/DelItemAction.hpp"

namespace CLI
{

DelCommand::DelCommand( const Arguments& args )
    : Command( args ) {}

void DelCommand::exec()
{
    auto slideId = std::get_if< int >( &_args.at( "-slideId" ) );
    auto itemId = std::get_if< int >( &_args.at( "-itemId" ) );
    if ( ! slideId )
    {
        throw InvalidArgumentException( "The -type argument is undefined." );
    }
    if ( ! itemId )
    {
        // Application::getDirector()->exec( std::make_shared< DelSlideAction >( *slideId ) );
    }
    else
    {
        Application::getDirector()->exec( std::make_shared< DelItemAction >( *itemId, *slideId ) );
    }
    
}

} // namespace CLI
