#ifndef SHAPE_STORAGE_HPP
#define SHAPE_STORAGE_HPP

#include "Shape.hpp"

#include <vector>
#include <memory>

class ShapeStorage
{
    using uShape = std::unique_ptr< Shape >;
    using Iterator = std::vector< std::unique_ptr< Shape > >::iterator;

public:
    uShape get( int ) const;
    bool has( int ) const;
    void add( uShape );
    void del( int );

private:
    std::vector< uShape > shapes;
};

#endif // SHAPE_STORAGE_HPP