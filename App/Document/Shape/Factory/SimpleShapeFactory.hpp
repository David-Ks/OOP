#ifndef SIMPLE_SHAPE_FACTORY_HPP
#define SIMPLE_SHAPE_FACTORY_HPP

#include <unordered_map>
#include <string>

#include "../Rectangle.hpp"

#include <memory>

class SimpleShapeFactory
{
    using Attributes = std::unordered_map< std::string, std::string >;

public:
    static std::unique_ptr< Shape > create( const Attributes& );
};

#endif // SIMPLE_SHAPE_FACTORY_HPP