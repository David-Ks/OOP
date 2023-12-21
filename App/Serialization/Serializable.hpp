#ifndef SERIALIZABLE_HPP
#define SERIALIZABLE_HPP

#include <QJsonObject>

class Serializable
{
public:
    virtual ~Serializable() {}
    virtual QJsonObject toJson() const = 0;
    virtual void fromJson(const QJsonObject& jsonObject) = 0;
};

#endif // SERIALIZABLE_HPP