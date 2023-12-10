#include "DrawCommand.hpp"
#include "../../../Director/Director.hpp"
#include "../../../Rendering/Render.hpp"
#include "../../../Document/Document.hpp"

namespace CLI
{

DrawCommand::DrawCommand( const Arguments& args )
    : Command( args ) {}

void DrawCommand::exec()
{
    auto slideId = std::get_if< int >( &_args.at( "-id" ) );
    if ( ! slideId )
    {
        throw InvalidArgumentException( "The -id argument is undefined." );
    }

    auto slide = Application::getDocument()->getSlideById( *slideId );
    Application::getRenderer()->draw( slide );
}

} // namespace CLI
