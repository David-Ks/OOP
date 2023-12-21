#ifndef SLIDE_HPP
#define SLIDE_HPP

#include "Item.hpp"
#include "../Utils/Exception.hpp"

#include <vector>
#include <memory>
#include <algorithm>

class Slide : public Serializable
{
    static int IdCounter;

public:
    using Items = std::vector< std::shared_ptr< Item > >;

    struct InvalidItemIdException : Utils::Exception { using Exception::Exception; };

public:
    Slide();

public:
    void addItem( std::shared_ptr< Item > );
    void delItem( std::shared_ptr< Item > );
    std::shared_ptr< Item > getItemById( int ) const;
    const Items& getItems() const;
    int getId() const;

public:
    QJsonObject toJson() const override;
    void fromJson( const QJsonObject& jsonObject ) override;

private:
    Items _items;
    int _id;
};

#endif // SLIDE_HPP