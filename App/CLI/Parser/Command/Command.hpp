#ifndef COMMAND_HPP
#define COMMAND_HPP

#include "../../../Utils/Exception.hpp"

#include <variant>
#include <string>
#include <map>

namespace CLI
{

class Command
{
public:
    using Value = std::variant< int, std::string >;
    using Arguments = std::map< std::string, Value >;

    struct InvalidArgumentException : Utils::Exception { using Exception::Exception; };
    struct InvalidArgumentValueException : Utils::Exception { using Exception::Exception; };

public:
    Command( const Arguments& args ) : _args( args ) {}
    virtual ~Command() {}
    virtual void exec() = 0;

protected:
    Arguments _args;
};

} // namespace CLI


#endif // COMMAND_HPP