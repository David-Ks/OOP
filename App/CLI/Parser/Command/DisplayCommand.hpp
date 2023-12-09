#ifndef DISPLAY_COMMAND_HPP
#define DISPLAY_COMMAND_HPP

#include "Command.hpp"
#include "../../../Application.hpp"

namespace CLI
{

class DisplayCommand : public Command
{
public:
    DisplayCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI


#endif // DISPLAY_COMMAND_HPP