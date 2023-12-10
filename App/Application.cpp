#include "Application.hpp"
#include "Document/Document.hpp"
#include "Director/Director.hpp"
#include "Rendering/Render.hpp"
#include "GUI/Controller.hpp"
#include "CLI/Controller.hpp"

std::shared_ptr< Common::ControllerBase > Application::_controller;

Application::Application( std::istream& input, std::ostream& output )
    : _input( input )
    , _output( output )
{}

Application::~Application() {}

void Application::run( const std::string& mode )
{
    if ( mode == "CLI" )
    {
        _controller = std::make_shared< CLI::Controller >( _input, _output );
    }
    else if ( mode == "GUI" )
    {
        _controller = std::make_shared< GUI::Controller >();
    }
    else
    {
        throw InvalidModException( "Invalid Mod." );
    }

    _controller->run();
}

std::shared_ptr< Common::ControllerBase > Application::getController()
{
    if ( ! _controller )
    {
        ApplicationNotRunnedException( "Need to run application." );
    }

    return _controller;
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
