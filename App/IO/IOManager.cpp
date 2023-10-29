#include "IOManager.hpp"

IOManager::IOManager( std::istream& is, std::ostream& os )
    : _is( is )
    , _os( os )
{

}

auto IOManager::getLine() const -> String
{
    String line;
    std::getline( _is, line );
    return line;
}
    
void IOManager::writeLine( const String& str )
{
    _os << str;
}
