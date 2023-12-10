#include "DisplayCommand.hpp"
#include "../../../Document/Document.hpp"
#include "../../../Rendering/Render.hpp"
#include "../../../Common/Controller/ControllerBase.hpp"

namespace CLI
{

DisplayCommand::DisplayCommand( const Arguments& args )
    : Command( args ) {}

void DisplayCommand::exec()
{
    auto id = std::get_if< int >( &_args.at( "-id" ) );
    if ( ! id )
    {
        throw InvalidArgumentException( "The -id argument is undefined." );
    }

    auto document = Application::getDocument();
    auto render = Application::getRenderer();

    render->print( document->getSlideById( *id ), Application::getController()->output() );
}

} // namespace CLI
