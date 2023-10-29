#include "Application.hpp"

Application::Application()
    : _io( std::cin, std::cout )
    , _interpreter( this, &_document, &_io )
{}

void Application::run()
{
    while ( true )
    {
        const auto line = _io.getLine();
        auto cmd = _interpreter.interpret( line );
        cmd->exec();
    }
}