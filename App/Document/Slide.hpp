#ifndef SLIDE_HPP
#define SLIDE_HPP

#include "Shape/Shape.hpp"

#include <memory>

class Slide
{
    using Shapes = std::vector< std::shared_ptr< Shape > >;

public:
    std::shared_ptr< Shape > getShape( int ) const;
    void addShape( std::shared_ptr< Shape > );
    const Shapes& getShapes() const;
    void delShape( int );

private:
    Shapes _shapes;
};

#endif // SLIDE_HPP