#include "Rectangle.hpp"

Rectangle::Rectangle()
{
}

std::string Rectangle::getProto() const
{
    return "Rectnagle -Lstyle=" + getLineStyle(); 
}
