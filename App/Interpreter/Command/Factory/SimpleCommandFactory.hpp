#ifndef COMMAMD_FACTORY_HPP
#define COMMAND_FACTORY_HPP

#include <string>
#include <memory>

#include "../AddCommand.hpp"
#include "../NullCommand.hpp"

class Application;
class IOManager;
class Document;

class SimpleCommandFactory
{
public:
    static std::unique_ptr< Command > create( const CommandParams&, Application*, IOManager*, Document* );
};

#endif // COMMAND_FACTORY_HPP