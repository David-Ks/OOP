#ifndef I_TEXTUAL_DISPLAYABLE_HPP
#define I_TEXTUAL_DISPLAYABLE_HPP

class ITextualDisplayable
{
public:
    virtual ~ITextualDisplayable() {}
    virtual void print() const = 0;
};

#endif // I_TEXTUAL_DISPLAYABLE_HPP