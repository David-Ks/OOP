#include "Application.hpp"
#include "Document/Document.hpp"
#include "Director/Director.hpp"
#include "Rendering/Render.hpp"


Application::~Application() {}

std::shared_ptr< Common::ControllerBase > Application::getController( Common::ControllerType type )
{
    static std::shared_ptr< Common::ControllerBase > controller;
    if ( ! controller )
    {
        switch ( type )
        {
        case Common::ControllerType::CLI:
            controller = std::make_shared< CLI::Controller >();
            break;
        
        case Common::ControllerType::GUI:
            controller = std::make_shared< GUI::Controller >();
            break;
        }
    }

    return controller;
}

std::shared_ptr< Document > Application::getDocument()
{
    static std::shared_ptr< Document > document;
    if ( ! document )
    {
        document = std::make_shared< Document >();
    }

    return document;
}

std::shared_ptr< Director > Application::getDirector()
{
    static std::shared_ptr< Director > director;
    if ( ! director )
    {
        director = std::make_shared< Director >();
    }

    return director;
}

std::shared_ptr< Render > Application::getRenderer()
{
    static std::shared_ptr< Render > renderer;
    if ( ! renderer )
    {
        renderer = std::make_shared< Render >();
    }
    
    return renderer;
}
