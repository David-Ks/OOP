#include "DrawCommand.hpp"

namespace CLI
{

DrawCommand::DrawCommand( const Arguments& args )
    : Command( args ) {}

void DrawCommand::exec()
{
    auto slideId = std::get_if< int >( & Utils::get( _args, std::string{ "-id" } ) );
    if ( ! slideId )
    {
        throw InvalidArgumentException( "The -id argument is undefined." );
    }

    auto filePath = std::get_if< std::string >( & Utils::get( _args, std::string{ "-file" } ) );
    if ( ! filePath )
    {
        throw InvalidArgumentException( "The -file argument is undefined." );
    }

    auto slide = Application::getInstance()->getDocument()->getSlideById( *slideId );
    QImage image( 600, 600, QImage::Format_RGB32 );
    Application::getInstance()->getRender()->draw( &image, slide );
    image.save( QString::fromStdString( *filePath ), "JPEG" );
}

} // namespace CLI
