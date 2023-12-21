#ifndef ITEM_HPP
#define ITEM_HPP

#include "../Serialization/Serializable.hpp"

#include <string>

class Item : public Serializable
{
    static int IdCounter;

public:
    using Position = std::tuple< int, int, int, int >;
public:
    Item() = default;
    Item( const std::string& shape, const Position& pos, const std::string& color = "black" );

public:
    std::string getShape() const;
    void setShape( const std::string& );

    std::string getColor() const;
    void setColor( const std::string& );

    Position getPosition() const;
    void setPosition( const Position& pos );

    int getId() const;

public:
    QJsonObject toJson() const override;
    void fromJson( const QJsonObject& jsonObject ) override;

private:
    std::string _shape;
    std::string _color;
    Position _position;
    int _id;
};


#endif // ITEM_HPP