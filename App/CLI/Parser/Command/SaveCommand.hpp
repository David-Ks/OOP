#ifndef SAVE_COMMAND_HPP
#define SAVE_COMMAND_HPP

#include "Command.hpp"
#include "../../../Utils/helpers.hpp"

namespace CLI
{

class SaveCommand : public Command
{
    struct OpenFileException : Utils::Exception { using Exception::Exception; };
    struct WriteToFileException : Utils::Exception { using Exception::Exception; };

public:
    SaveCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI

#endif // SAVE_COMMAND_HPP