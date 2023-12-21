#include "SaveCommand.hpp"
#include "../../../Application.hpp"
#include "../../../Serialization/JsonSerializer.hpp"

namespace CLI
{

SaveCommand::SaveCommand( const Arguments& args )
    : Command( args ) {}

void SaveCommand::exec()
{
    auto filePath = std::get_if< std::string >( & Utils::get( _args, std::string{ "-file" } ) );
    if ( ! filePath )
    {
        throw InvalidArgumentException( "The -file argument is undefined." );
    }

    JsonSerializer serializer;

    QByteArray serializedData = serializer.serialize( *static_cast< Serializable* >( Application::getInstance()->getDocument() ) );

    QFile file( QString::fromStdString( *filePath ) );
    if ( file.open( QIODevice::WriteOnly ) ) 
    {
        qint64 bytesWritten = file.write( serializedData );
        if ( bytesWritten == -1 )
        {
            throw WriteToFileException( "Failed to write to file!" );
        } 
        file.close();
    } 
    else 
    {
        throw OpenFileException( "Failed to open file for writing!" );
    }
}

} // namespace CLI
