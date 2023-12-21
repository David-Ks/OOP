#include "ShapeLib.hpp"
#include "../ShapeRectangle.hpp"

ShapeLib::ShapeLib()
{
    _shapes[ "rect" ] = std::make_shared< Rectangle >();
}

ShapeLib::~ShapeLib() {}


ShapeLib* ShapeLib::instance()
{
    static ShapeLib instance;
    return &instance;
}

std::shared_ptr< ShapeBase > ShapeLib::get( std::shared_ptr< Item > item ) 
{
    auto it = _shapes.find( item->getShape() );
    if ( it == _shapes.end() ) 
    {
        throw InvalidShapeException( "Invalid Shape name." + item->getShape() );
    }

    return std::dynamic_pointer_cast< ShapeBase >( it->second->clone( item ) );

}