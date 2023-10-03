#ifndef EXIT_COMMAND_HPP
#define EXIT_COMMAND_HPP

#include "Command.hpp"

class ExitCommand : public Command
{
public:
    void exec() override;
    void addParam( const std::string& name, const std::string& value ) override;
};

#endif // EXIT_COMMAND_HPP