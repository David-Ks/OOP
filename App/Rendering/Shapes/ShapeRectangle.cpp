#include "ShapeRectangle.hpp"

#include <QColor>

void Rectangle::draw( QPainter& painter )
{
    painter.fillRect( std::get< 0 >( _bound ), 
                      std::get< 1 >( _bound ), 
                      std::get< 2 >( _bound ), 
                      std::get< 3 >( _bound ), 
                      QColor{ QString::fromStdString( _color ) } );
}

std::shared_ptr< IShape > Rectangle::clone( std::shared_ptr< Item > item ) const
{
    auto shape = std::make_shared< Rectangle >();
    shape->setBound( item->getPosition() );
    shape->setColor( item->getColor() );
    shape->setName( item->getShape() );
    return shape;
}