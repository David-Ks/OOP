#ifndef I_SHAPE_HPP
#define I_SHAPE_HPP

#include <memory>

class IShape
{
public:
    virtual ~IShape() {}
    virtual std::unique_ptr< IShape > copy() const = 0;
};

#endif // I_SHAPE_HPP
