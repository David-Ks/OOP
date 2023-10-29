#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"

class Document;
class IOManager;

class ListCommand : public Command
{
public:
    ListCommand( const CommandParams& params, Document* document, IOManager* io )
        : Command( params )
        , _document( document )
        , _io( io ) {}

public:
    void exec() override;

private:
    Document* _document;
    IOManager* _io;
};

#endif // ADD_COMMAND_HPP