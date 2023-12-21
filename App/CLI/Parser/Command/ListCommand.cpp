#include "ListCommand.hpp"
#include "../../../Utils/helpers.hpp"
#include "../../Controller.hpp"

namespace CLI
{

ListCommand::ListCommand( const Arguments& args )
    : Command( args ) {}

void ListCommand::exec()
{
    std::ostream& os = Application::getInstance()->getController()->getOStream();
    os << "Slide ids: ";
    for ( const auto& slide : Application::getInstance()->getDocument()->getSlides() )
    {
        os << slide->getId() << " ";
    }
    os << std::endl;
}

} // namespace CLI
