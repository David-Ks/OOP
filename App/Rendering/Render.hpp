#ifndef RENDER_HPP
#define RENDER_HPP

#include "../Document/Slide.hpp"

namespace Common
{

class Render
{
public:
    void draw( std::shared_ptr< Slide > );
};

} // namespace Common

#endif // RENDER_HPP