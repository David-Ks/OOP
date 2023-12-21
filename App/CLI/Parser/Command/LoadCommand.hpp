#ifndef LOAD_COMMAND_HPP
#define LOAD_COMMAND_HPP

#include "Command.hpp"
#include "../../../Utils/helpers.hpp"

namespace CLI
{

class LoadCommand : public Command
{
    struct OpenFileException : Utils::Exception { using Exception::Exception; };
    struct InvalidFormatException : Utils::Exception { using Exception::Exception; };

public:
    LoadCommand( const Arguments& args );
    void exec() override;
};

} // namespace CLI

#endif // LOAD_COMMAND_HPP