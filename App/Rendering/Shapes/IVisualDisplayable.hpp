#ifndef I_VISUAL_DISPLAYABLE_HPP
#define I_VISUAL_DISPLAYABLE_HPP

class IVisualDisplayable
{
public:
    virtual ~IVisualDisplayable() {}
    virtual void draw() = 0;
};

#endif // I_VISUAL_DISPLAYABLE_HPP