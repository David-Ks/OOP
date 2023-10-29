#ifndef IO_MANAGER_HPP
#define IO_MANAGER_HPP

#include <iostream>
#include <string>

class IOManager
{
    using String = std::string;
public:
    IOManager( std::istream&, std::ostream& );

public:
    String getLine() const;
    void writeLine( const String& );

    // void draw( Shape )

private:
    std::istream& _is;
    std::ostream& _os;
};

#endif // IO_MANAGER_HPP