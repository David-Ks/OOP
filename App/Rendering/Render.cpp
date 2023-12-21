#include "Render.hpp"

void Render::draw( QPaintDevice* device, std::shared_ptr< Slide > slide ) const
{
    QPainter painter( device );

    for ( const auto& item : slide->getItems() )
    {
        auto shape = ShapeLib::instance()->get( item );
        shape->draw( painter );
    }
}

void Render::print( std::shared_ptr< Slide > slide, std::ostream& stream ) const
{
    for ( const auto& item : slide->getItems() )
    {
        auto shape = ShapeLib::instance()->get( item );
        shape->print( stream );
    }
}
