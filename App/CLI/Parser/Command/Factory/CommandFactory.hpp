#ifndef COMMAND_FACTORY_HPP
#define COMMAND_FACTORY_HPP

#include "../Command.hpp"
#include "../AddCommand.hpp"
#include "../UndoCommand.hpp"
#include "../RedoCommand.hpp"
#include "../ExitCommand.hpp"
#include "../NoneCommand.hpp"
#include "../ListCommand.hpp"
#include "../DisplayCommand.hpp"
#include "../DrawCommand.hpp"
#include "../LoadCommand.hpp"
#include "../SaveCommand.hpp"

#include <memory>

namespace CLI
{

class CommandFactory
{    
public:
    static std::unique_ptr< Command > create( const std::string& name, const Command::Arguments& args );
};

} // namespace CLI


#endif // COMMAND_FACTORY_HPP