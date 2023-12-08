#include "Application.hpp"
#include "Document/Document.hpp"
#include "Director/Director.hpp"

std::shared_ptr< Common::ControllerBase > Application::_controller;
std::shared_ptr< Document > Application::_document;
std::shared_ptr< Director > Application::_director;

Application::~Application() {}

std::shared_ptr< Common::ControllerBase > Application::getController( Common::ControllerType type )
{
    if ( ! _controller )
    {
        switch ( type )
        {
        case Common::ControllerType::CLI:
            _controller = std::make_shared< CLI::Controller >();
            break;
        
        case Common::ControllerType::GUI:
            _controller = std::make_shared< GUI::Controller >();
            break;
        }
    }

    return _controller;
}

std::shared_ptr< Document > Application::getDocument()
{
    if ( ! _document )
    {
        _document = std::make_shared< Document >();
    }

    return _document;
}

std::shared_ptr< Director > Application::getDirector()
{
    if ( ! _director )
    {
        _director = std::make_shared< Director >();
    }

    return _director;
}
