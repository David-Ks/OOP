#ifndef RENDER_HPP
#define RENDER_HPP

#include "../Document/Slide.hpp"
#include "Shapes/ShapeLib/ShapeLib.hpp"

#include <ostream>

#include <QImage>
#include <QPainter>
#include <QPixmap>
#include <QFile>
#include <QFileDialog>

class Render
{
public:
    void draw( std::shared_ptr< Slide > ) const;
    QImage createImage( std::shared_ptr< Slide > ) const;
    void print( std::shared_ptr< Slide >, std::ostream& stream ) const;
};

#endif // RENDER_HPP