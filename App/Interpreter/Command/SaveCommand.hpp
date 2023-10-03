#ifndef SAVE_COMMAND_HPP
#define SAVE_COMMAND_HPP

#include "Command.hpp"

class SaveCommand : public Command
{
public:
    void exec() override;
    void addParam( const std::string& name, const std::string& value ) override;
};

#endif // SAVE_COMMAND_HPP