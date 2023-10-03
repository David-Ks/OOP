#ifndef SIMPLE_SHAPE_FACTORY_HPP
#define SIMPLE_SHAPE_FACTORY_HPP

#include <map>
#include <string>

#include "../Rectangle.hpp"

class SimpleShapeFactory
{
    using Attributes = std::map< std::string, std::string >;
public:
    static Shape* create( const Attributes& );
};

#endif // SIMPLE_SHAPE_FACTORY_HPP