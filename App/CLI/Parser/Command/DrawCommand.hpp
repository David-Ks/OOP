#ifndef DRAW_COMMAND_HPP
#define DRAW_COMMAND_HPP

#include "Command.hpp"
#include "../../../Application.hpp"

namespace CLI
{

class DrawCommand : public Command
{
public:
    DrawCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI


#endif // DRAW_COMMAND_HPP