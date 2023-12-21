#ifndef I_SHAPE_BASE_HPP
#define I_SHAPE_BASE_HPP

#include "IShape.hpp"
#include "ITextualDsiplayable.hpp"
#include "IVisualDisplayable.hpp"

#include <string>

class ShapeBase : public IShape, public ITextualDisplayable, public IVisualDisplayable
{
    using BoundRect = std::tuple< int, int, int, int >;

public:
    void print( std::ostream& ) const override;

public:
    void setName( const std::string& name );
    void setColor( const std::string& color );
    void setBound( const BoundRect& bound );

protected:
    std::string _name;
    std::string _color;
    BoundRect _bound;
};

#endif // I_SHAPE_BASE_HPP