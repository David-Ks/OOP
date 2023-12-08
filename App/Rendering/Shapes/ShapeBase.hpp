#ifndef I_SHAPE_BASE_HPP
#define I_SHAPE_BASE_HPP

#include "../IShape.hpp"
#include "../ITextualDsiplayable.hpp"

class ShapeBase : public IShape, ITextualDisplayable
{
public:
    virtual ~ShapeBase() {}
};

#endif // I_SHAPE_BASE_HPP