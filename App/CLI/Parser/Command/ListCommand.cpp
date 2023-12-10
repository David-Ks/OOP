#include "ListCommand.hpp"
#include "../../../Application.hpp"
#include "../../../Document/Document.hpp"
#include "../../Controller.hpp"

namespace CLI
{

ListCommand::ListCommand( const Arguments& args )
    : Command( args ) {}

void ListCommand::exec()
{
    std::ostream& output = Application::getController()->output();
    output << "Slides:" << std::endl;

    for ( const auto& slide : Application::getDocument()->getSlides() )
    {
        output << slide->getId() << std::endl;
    }
}

} // namespace CLI
