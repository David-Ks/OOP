#include "App/Application.hpp"

#include <iostream>

int main( int argc, char* argv[] )
{
    std::shared_ptr< Common::ControllerBase > controller;

    if ( argc > 1 )
    {
        const std::string mode = argv[ 1 ];

        if ( mode == "CLI" )
        {
            controller = Application::getController( Common::ControllerType::CLI );
        }
        else if ( mode == "GUI" )
        {
            controller = Application::getController( Common::ControllerType::GUI );
        }
        else
        {
            std::cerr << "Invalid mode. Please use 'CLI' or 'GUI'." << std::endl;
            return 1;
        }
    }
    else
    {
        std::cerr << "No mode specified. Please use 'CLI' or 'GUI'." << std::endl;
        return 1;
    }

    controller->run();

    return 0;
}
