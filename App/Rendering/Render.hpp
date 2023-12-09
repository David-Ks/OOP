#ifndef RENDER_HPP
#define RENDER_HPP

#include "../Document/Slide.hpp"
#include "Shapes/ShapeLib/ShapeLib.hpp"

#include <ostream>

class Render
{
public:
    void draw( std::shared_ptr< Slide > );
    void print( std::shared_ptr< Slide >, std::ostream& stream );
};

#endif // RENDER_HPP