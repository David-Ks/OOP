#ifndef EXIT_COMMAND_HPP
#define EXIT_COMMAND_HPP

#include "Command.hpp"
#include "../../../Application.hpp"

namespace CLI
{

class ExitCommand : public Command
{
public:
    ExitCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI


#endif // EXIT_COMMAND_HPP