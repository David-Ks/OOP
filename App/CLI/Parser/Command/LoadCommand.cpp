#include "LoadCommand.hpp"
#include "../../../Application.hpp"

#include <QJsonDocument>

namespace CLI
{

LoadCommand::LoadCommand( const Arguments& args )
    : Command( args ) {}

void LoadCommand::exec()
{
    auto filePath = std::get_if< std::string >( & Utils::get( _args, std::string{ "-file" } ) );
    if ( ! filePath )
    {
        throw InvalidArgumentException( "The -file argument is undefined." );
    }

    QFile file( QString::fromStdString( *filePath ) );
    if ( ! file.open( QIODevice::ReadOnly | QIODevice::Text ) )
    {
        throw OpenFileException( "Failed to open file for writing!" );
    }

    QByteArray jsonData = file.readAll();

    file.close();

    QJsonDocument jsonDoc = QJsonDocument::fromJson( jsonData );
    if ( ! jsonDoc.isObject() ) 
    {
        throw InvalidFormatException( "Invalid JSON format!" );
    }

    Application::getInstance()->getDocument()->fromJson( jsonDoc.object() );
}

} // namespace CLI
