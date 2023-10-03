#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle();

public:
    virtual void setLineColor( const std::string& ) override;
    virtual void setLineWidth( const std::string& ) override;
    virtual void setFillColor( const std::string& ) override;
    virtual void setStyle( const std::string& ) override;

public:
    virtual std::string getProto() const override;

private:
    std::string fillColor;
    std::string lineColor;
    std::string lineWidth;
    std::string lineStyle;
};

#endif // RECTANGLE_HPP