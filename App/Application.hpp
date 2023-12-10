#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Common/Exception/Exception.hpp"
#include "Application_fwd.hpp"

#include <memory>

class Application
{
public:
    struct ApplicationNotRunnedException : Common::Exception { using Exception::Exception; };
    struct InvalidModException : Common::Exception { using Exception::Exception; };
    
public:
    static std::shared_ptr< Common::ControllerBase > getController();
    static std::shared_ptr< Director > getDirector();
    static std::shared_ptr< Document > getDocument();
    static std::shared_ptr< Render > getRenderer();

public:
    Application( std::istream& input, std::ostream& output );
    ~Application();

    void run( const std::string& );

private:
    static std::shared_ptr< Common::ControllerBase > _controller;
    std::istream& _input; 
    std::ostream& _output;
};

#endif // APPLICATION_HPP
