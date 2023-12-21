#ifndef LIST_COMMAND_HPP
#define LIST_COMMAND_HPP

#include "Command.hpp"
#include "../../../Application.hpp"

namespace CLI
{

class ListCommand : public Command
{
public:
    ListCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI


#endif // LIST_COMMAND_HPP