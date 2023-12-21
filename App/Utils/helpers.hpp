#ifndef HELPERS_HPP
#define HELPERS_HPP

#include <map>
#include <string>

namespace Utils
{

template< typename Key, typename Value >
Value& get( std::map< Key, Value >& map, const Key& key );

template< typename Key, typename Value >
Value& get( std::map< Key, Value >& map, Key&& key );

bool isConvertibleToInt( const std::string& str );

} // namespace Utils

#include "helpers.impl.hpp"

#endif // HELPERS_HPP