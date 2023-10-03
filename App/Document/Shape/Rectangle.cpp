#include "Rectangle.hpp"

Rectangle::Rectangle()
    : lineColor( "Black" )
    , lineWidth( "1" )
    , fillColor( "White" )
    , lineStyle( "dotted" )
{
}

void Rectangle::setLineColor( const std::string& color )
{
    lineColor = color;
}

void Rectangle::setLineWidth( const std::string& width )
{
    lineWidth = width;
}

void Rectangle::setFillColor( const std::string& color )
{
    fillColor = color;
}

void Rectangle::setStyle( const std::string& style )
{
    lineStyle = style;
}

std::string Rectangle::getProto() const
{
    return "Rectnagle -LColor=" + lineColor + " -LWidth=" + lineWidth + " -FColor=" + fillColor; 
}
