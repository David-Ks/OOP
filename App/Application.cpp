#include "Application.hpp"

Application::Application()
    : io( std::cin, std::cout )
    // , interpreter( doc, io )
{

}

void Application::run()
{
    const auto line = io.getLine();
    auto cmd = interpreter.interpret( line );
    cmd->exec();
}