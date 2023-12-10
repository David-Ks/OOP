#include "App/Application.hpp"

#include <iostream>

int main( int argc, char* argv[] )
{
    if ( argc > 1 )
    {
        const std::string mode = argv[ 1 ];

        Application app( std::cin, std::cout );
        app.run( mode );
    }
    else
    {
        std::cerr << "No mode specified. Please use 'CLI' or 'GUI'." << std::endl;
        return 1;
    }

    return 0;
}
