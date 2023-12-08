#include "Parser.hpp"

namespace CLI
{

Parser::Parser() {}

std::unique_ptr< Command > Parser::parse( const std::string& line )
{
    if ( line.empty() ) 
        throw EmptyLineException( "Parser Error: Empty line." );

    Tokens tokens = tokenize( line );

    Command::Arguments args;
    std::string cmdName = getNext( tokens );

    while ( ! tokens.empty() )
    {
        const Token argName = getNext( tokens );
        const Token argValue = getNext( tokens );
        args[ argName ] = argValue;
    }
    
    return std::move( CommandFactory::create( cmdName, args ) );
}

auto Parser::tokenize( const std::string& line ) -> Tokens
{
    std::istringstream iss( line );

    Tokens tokens;
    for ( Token token; iss >> token; )
    {
        tokens.push_back(token);
    }

    return tokens;
}

auto Parser::getNext( Tokens& tokens ) -> Token
{
    if ( tokens.empty() )
        throw InvalidTokenException( "Parser Error: Invalud Token." );

    Token value = tokens.front();
    tokens.pop_front();
    return value;
}

} // namespace CLI
