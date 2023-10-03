#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"

class AddCommand : public Command
{
public:
    AddCommand( );

public:
    void exec() override;
    void addParam( const std::string& name, const std::string& value ) override;

private:
    CommandParams params;
};

#endif // ADD_COMMAND_HPP