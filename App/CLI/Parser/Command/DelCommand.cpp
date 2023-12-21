#include "DelCommand.hpp"
#include "../../../Application.hpp"
#include "../../../Director/Actions/DelItemAction.hpp"
#include "../../../Director/Actions/DelSlideAction.hpp"

namespace CLI
{

DelCommand::DelCommand( const Arguments& args )
    : Command( args ) {}

void DelCommand::exec()
{
    auto slideId = std::get_if< int >( & Utils::get( _args, std::string{ "-slideId" } ) );
    auto itemId = std::get_if< int >( & Utils::get( _args, std::string{ "-itemId" } ) );
    if ( ! slideId )
    {
        throw InvalidArgumentException( "The -type argument is undefined." );
    }
    if ( ! itemId )
    {
        auto slide = Application::getInstance()->getDocument()->getSlideById( *slideId );
        Application::getInstance()->getDirector()->exec( std::make_shared< DelSlideAction >( slide ) );
    }
    else
    {
        auto item = Application::getInstance()->getDocument()->getSlideById( *slideId )->getItemById( *itemId );
        Application::getInstance()->getDirector()->exec( std::make_shared< DelItemAction >( item, *slideId ) );
    }
    
}

} // namespace CLI
