#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <stdexcept>
#include <string>

namespace Common
{

class Exception : std::exception
{
public:
    template< typename String >
    explicit Exception( String&& str )
        : _what( std::forward< String >( str ) ) {}

    const char* what() const noexcept override
    {
        return _what.c_str();
    }

private:
    std::string _what;
};

} // namespace Common


#endif // EXCEPTION_HPP