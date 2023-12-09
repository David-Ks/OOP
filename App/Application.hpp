#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "GUI/Controller.hpp"
#include "CLI/Controller.hpp"

#include <memory>

class Document;
class Director;
class Render;

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
    static std::shared_ptr< Render > getRenderer();

private:
    Application() {}
    ~Application(); 
    Application( const Application& );
    Application& operator=( const Application& );
};

#endif // APPLICATION_HPP
