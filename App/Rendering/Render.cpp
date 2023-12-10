#include "Render.hpp"

void Render::draw( std::shared_ptr< Slide > slide ) const
{

}

void Render::print( std::shared_ptr< Slide > slide, std::ostream& stream ) const
{
    for ( const auto& item : slide->getItems() )
    {
        auto shape = ShapeLib::instance()->get( item->getShape() );
        shape->print( stream );
    }
}


QImage Render::createImage( std::shared_ptr< Slide > ) const
{
    QImage image(400, 300, QImage::Format_RGB32);
    image.fill(Qt::white);

    QPainter painter(&image);

    painter.setPen(Qt::red);
    painter.drawRect(50, 50, 300, 200);

    return image;
}
