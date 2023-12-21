#ifndef I_SHAPE_HPP
#define I_SHAPE_HPP

#include "../../Document/Item.hpp"

#include <memory>

class IShape
{
public:
    virtual ~IShape() {}
    virtual std::shared_ptr< IShape > clone( std::shared_ptr< Item > item ) const = 0;
};

#endif // I_SHAPE_HPP
