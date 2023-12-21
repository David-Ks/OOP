#include "helpers.hpp"

#include <exception>
#include <sstream>
#include <string>

namespace Utils
{

template< typename Key, typename Value >
Value& get( std::map< Key, Value >& map, const Key& key )
{
    auto it = map.find( key );
    if ( it == map.end() )
    {
        std::ostringstream error;
        error << key;
        throw std::out_of_range( "Unknown key: " + error.str() );
    }
    return it->second;
}

template< typename Key, typename Value >
Value& get( std::map< Key, Value >& map, Key&& key )
{
    return get( map, static_cast< Key& >( key ) );
}

} // namespace Utils
