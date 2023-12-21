#include "helpers.hpp"

namespace Utils
{

bool isConvertibleToInt( const std::string& str )
{
    if (str.empty() || (str.size() == 1 && str[0] == '-'))
    {
        return false;
    }

    size_t startIndex = ( str[ 0 ] == '-' ) ? 1 : 0;

    for ( size_t i = startIndex; i < str.size(); ++i )
    {
        if ( str[ i ] < '0' || str[ i ] > '9' )
        {
            return false;
        }
    }

    return true;
}

} // namespace Utils
