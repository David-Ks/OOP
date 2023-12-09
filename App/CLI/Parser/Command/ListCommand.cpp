#include "ListCommand.hpp"
#include "../../../Document/Document.hpp"

namespace CLI
{

ListCommand::ListCommand( const Arguments& args )
    : Command( args ) {}

void ListCommand::exec()
{
    std::cout << "Slides:" << std::endl;

    for ( const auto& slide : Application::getDocument()->getSlides() )
    {
        std::cout << slide->getId() << std::endl;
    }
}

} // namespace CLI
