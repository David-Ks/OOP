#include "Application.hpp"
#include "CLI/Controller.hpp"

Application::~Application() {}

void Application::initialize( std::istream& is, std::ostream& os )
{
    _controller = std::make_shared< CLI::Controller >( is, os );
}

Application* Application::getInstance()
{
    static Application app;
    return &app;
}

Document* Application::getDocument()
{
    return &_document;
}

Director* Application::getDirector()
{
    return &_director;
}

std::shared_ptr< CLI::Controller > Application::getController()
{
    assert( _controller != nullptr && "Uninitialized application" );
    return _controller;
}

void Application::run()
{
    getController()->run();
}

Render* Application::getRender()
{
    return &_render;
}
