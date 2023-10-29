#include <vector>
#include <memory>
#include <stdexcept>

#include "Slide.hpp"

std::shared_ptr< Shape > Slide::getShape( int index ) const
{
    if ( index < 0 || index >= _shapes.size() )
    {
        throw std::runtime_error( "Failed to get a Shape." );
    }

    return _shapes[ index ];
}

void Slide::addShape( std::shared_ptr< Shape > shape )
{
    _shapes.push_back( std::move( shape ) );
}

void Slide::delShape( int index )
{
    if ( index < 0 || index >= _shapes.size() )
    {
        throw std::runtime_error( "Failed to delete a Shape." );
    }

    _shapes.erase( _shapes.begin() + index );
}

auto Slide::getShapes() const -> const Shapes&
{
    return _shapes;
}
