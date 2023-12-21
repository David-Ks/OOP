#ifndef JSON_SERIALIZER_HPP
#define JSON_SERIALIZER_HPP

#include "Serializable.hpp"

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QByteArray>

class JsonSerializer
{
public:
    static QByteArray serialize( const Serializable& object );
    static void deserialize( Serializable& object, const QByteArray& data );
};

#endif // JSON_SERIALIZER_HPP