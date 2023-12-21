#include "App/Application.hpp"

#include <iostream>

int main( int argc, char* argv[] )
{
    auto app = Application::getInstance();

    try
    {
        app->initialize( std::cin, std::cout );
        app->run();
    }
    catch( const Utils::Exception& e )
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
