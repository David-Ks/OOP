#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "GUI/Controller.hpp"
#include "CLI/Controller.hpp"

#include <memory>

class Document;
class Director;

class Application
{
public:
    /**
     * @brief Get the Controller instance
     *        The Controller type will only be defined on the first call, this happens in the main.cpp
     * 
     * @param ControllerType Optional
     * @return ControllerBase
     */
    static std::shared_ptr< Common::ControllerBase > getController( Common::ControllerType type = Common::ControllerType::CLI );
    static std::shared_ptr< Director > getDirector();
    static std::shared_ptr< Document > getDocument();

private:
    Application() {}
    ~Application(); 
    Application( const Application& );
    Application& operator=( const Application& );

private:
    static std::shared_ptr< Common::ControllerBase > _controller;
    static std::shared_ptr< Document > _document;
    static std::shared_ptr< Director > _director;
};

#endif // APPLICATION_HPP
