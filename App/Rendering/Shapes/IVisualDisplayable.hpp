#ifndef I_VISUAL_DISPLAYABLE_HPP
#define I_VISUAL_DISPLAYABLE_HPP

#include <QPainter>

class IVisualDisplayable
{
public:
    virtual ~IVisualDisplayable() {}
    virtual void draw( QPainter& painter ) = 0;
};

#endif // I_VISUAL_DISPLAYABLE_HPP