#include "JsonSerializer.hpp"

QByteArray JsonSerializer::serialize( const Serializable& object )
{
    QJsonDocument jsonDoc( object.toJson() );
    return jsonDoc.toJson( QJsonDocument::Compact );
}

void JsonSerializer::deserialize( Serializable& object, const QByteArray& data )
{
    QJsonDocument jsonDoc = QJsonDocument::fromJson( data );
    if ( jsonDoc.isObject() ) 
    {
        const QJsonObject jsonObject = jsonDoc.object();
        object.fromJson( jsonObject );
    }
}