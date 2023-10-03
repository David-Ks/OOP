#ifndef DISPLAY_COMMAND_HPP
#define DISPLAY_COMMAND_HPP

#include "Command.hpp"

class DisplayCommand : public Command
{
public:
    DisplayCommand();
public:
    void exec() override;
    void addParam( const std::string& name, const std::string& value ) override;

private:
    CommandParams params;
};

#endif // DISPLAY_COMMAND_HPP