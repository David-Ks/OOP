#ifndef RENDER_HPP
#define RENDER_HPP

#include "../Document/Slide.hpp"
#include "Shapes/ShapeLib/ShapeLib.hpp"

#include <ostream>

#include <QPainter>
#include <QPixmap>
#include <QFile>
#include <QFileDialog>
#include <QPaintDevice>

class Render
{
    using Size = std::pair< int, int >;

public:
    void draw( QPaintDevice* device, std::shared_ptr< Slide > ) const;
    void print( std::shared_ptr< Slide >, std::ostream& stream ) const;
};

#endif // RENDER_HPP