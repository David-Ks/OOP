#include "IOManager.hpp"

IOManager::IOManager( std::istream& is, std::ostream& os )
    : is( is )
    , os( os )
{

}

auto IOManager::getLine() const -> String
{
    String line;
    is >> line;
    return line;
}
    
void IOManager::writeLine( const String& str )
{
    os << str;
}
