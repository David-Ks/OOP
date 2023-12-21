#include "DisplayCommand.hpp"
#include "../../Controller.hpp"

namespace CLI
{

DisplayCommand::DisplayCommand( const Arguments& args )
    : Command( args ) {}

void DisplayCommand::exec()
{
    auto id = std::get_if< int >( & Utils::get( _args, std::string{ "-id" } ) );
    if ( ! id )
    {
        throw InvalidArgumentException( "The -id argument is undefined." );
    }

    auto document = Application::getInstance()->getDocument();
    auto render = Application::getInstance()->getRender();

    render->print( document->getSlideById( *id ), Application::getInstance()->getController()->getOStream() );
}

} // namespace CLI
