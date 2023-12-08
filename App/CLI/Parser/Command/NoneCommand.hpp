#ifndef NONE_COMMAND_HPP
#define NONE_COMMAND_HPP

#include "Command.hpp"

#include <stdexcept>

namespace CLI
{

class NoneCommand : public Command
{
public:
    NoneCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI


#endif // NONE_COMMAND_HPP