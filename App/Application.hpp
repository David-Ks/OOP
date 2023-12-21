#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Document/Document.hpp"
#include "Director/Director.hpp"
#include "Rendering/Render.hpp"

namespace CLI
{
    class Controller;
}

#include <memory>
#include <cassert>
#include <iostream>

class Application
{
    struct InvalidModeException : Utils::Exception { using Exception::Exception; };
    struct UndefinedModeException : Utils::Exception { using Exception::Exception; };

public:
    static Application* getInstance();
    void initialize( std::istream&, std::ostream& );
    void run();

    std::shared_ptr< CLI::Controller > getController();
    Director* getDirector();
    Document* getDocument();
    Render* getRender();

private:
    Application() {}
    ~Application(); 
    Application( const Application& );
    Application& operator=( const Application& );

private:
    std::shared_ptr< CLI::Controller > _controller;
    Document _document;
    Director _director;
    Render _render;
};

#endif // APPLICATION_HPP
