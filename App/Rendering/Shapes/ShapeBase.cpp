#include "ShapeBase.hpp"


std::unique_ptr< IShape > ShapeBase::copy() const
{

}

void ShapeBase::print( std::ostream& stream ) const
{
    stream << "Shape: name = " << _name << ", color = " << _color << "\n";
}

void ShapeBase::setName( const std::string& name )
{
    _name = name;
}

void ShapeBase::setColor( const std::string& color )
{
    _color = color;
}