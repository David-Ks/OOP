#ifndef SHAPE_RECTANGLE_HPP
#define SHAPE_RECTANGLE_HPP

#include "ShapeBase.hpp"
#include "IVisualDisplayable.hpp"

class Rectangle : public ShapeBase, public IVisualDisplayable
{
public:
    Rectangle() = default;

public:
    void draw() override;
};

#endif // SHAPE_RECTANGLE_HPP