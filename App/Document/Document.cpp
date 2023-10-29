#include <vector>
#include <memory>
#include <stdexcept>

#include "Document.hpp"

std::shared_ptr< Slide > Document::getSlide( int index ) const
{
    if ( index < 0 || index >= _slides.size() )
    {
        throw std::runtime_error( "Failed to get a Slide." );
    }

    return _slides[ index ];
}

void Document::addSlide( std::shared_ptr< Slide > slide )
{
    _slides.push_back( slide );
}

void Document::delSlide( int index )
{
    if ( index < 0 || index >= _slides.size() )
    {
        throw std::runtime_error( "Failed to delete a Slide." );
    }

    _slides.erase( _slides.begin() + index );
}

auto Document::getSlides() const -> const Slides&
{
    return _slides;
}
