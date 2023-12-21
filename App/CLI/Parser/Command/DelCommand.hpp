#ifndef DEL_COMMAND_HPP
#define DEL_COMMAND_HPP

#include "Command.hpp"
#include "../../../Utils/helpers.hpp"

namespace CLI
{

class DelCommand : public Command
{
public:
    DelCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI


#endif // DEL_COMMAND_HPP