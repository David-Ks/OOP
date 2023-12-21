#ifndef SHAPE_RECTANGLE_HPP
#define SHAPE_RECTANGLE_HPP

#include "ShapeBase.hpp"

class Rectangle : public ShapeBase
{
public:
    Rectangle() = default;

public:
    std::shared_ptr< IShape > clone( std::shared_ptr< Item > item ) const override;
    void draw( QPainter& painter ) override;
};

#endif // SHAPE_RECTANGLE_HPP