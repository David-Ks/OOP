#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle();

public:
    virtual std::string getProto() const override;
};

#endif // RECTANGLE_HPP