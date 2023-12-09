#ifndef I_TEXTUAL_DISPLAYABLE_HPP
#define I_TEXTUAL_DISPLAYABLE_HPP

#include <ostream>

class ITextualDisplayable
{
public:
    virtual ~ITextualDisplayable() {}
    virtual void print( std::ostream& ) const = 0;
};

#endif // I_TEXTUAL_DISPLAYABLE_HPP