#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"

class Document;

class AddCommand : public Command
{
public:
    AddCommand( const CommandParams& params, Document* document )
        : Command( params )
        , _document( document ) {}

public:
    void exec() override;

private:
    Document* _document;
};

#endif // ADD_COMMAND_HPP