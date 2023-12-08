#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"


namespace CLI
{

class AddCommand : public Command
{
public:
    AddCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI


#endif // ADD_COMMAND_HPP