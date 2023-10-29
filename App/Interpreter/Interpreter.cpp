#include "Interpreter.hpp"

std::unique_ptr< Command > Interpreter::interpret( const std::string& line )
{
    auto tokens = _parser.tokenize( line );
    auto params = _parser.parse( tokens );
    auto command = SimpleCommandFactory::create( params, _app, _iomanager, _document );
    
    return command;
}