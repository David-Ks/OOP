#include "ShapeLib.hpp"

std::shared_ptr< ShapeLib > ShapeLib::instance()
{
    static std::shared_ptr< ShapeLib > _instance;
    if ( ! _instance )
    {
        _instance = std::make_shared< ShapeLib >();
    }

    return _instance;
}

std::shared_ptr< ShapeBase > ShapeLib::get( const std::string& shape ) 
{
    auto it = _shapes.find( shape );
    if ( it != _shapes.end() ) 
    {
        return it->second;
    }

    throw InvalidShapeException( "Invalid Shape name." );
}