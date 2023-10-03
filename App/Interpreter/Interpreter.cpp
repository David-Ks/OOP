#include "Interpreter.hpp"


Command* Interpreter::interpret( const std::string& line )
{
    Parser::Tokens tokens = parser.tokenize( line );
    CommandParams cParams = parser.parse( tokens );

    auto command = SimpleCommandFactory::create( cParams );

    if ( command )
    {
        return command;
    }
    else 
    {
        throw std::runtime_error( "Failed to create a valid command." );
    }
}