#include "Parser.hpp"

namespace CLI
{

Parser::Parser() {}

std::unique_ptr< Command > Parser::parse( std::istream& is )
{
    if ( is.peek() == EOF ) 
        throw EmptyLineException( "Parser Error: Empty line." );

    std::string line = getLine( is );
    Tokens tokens = tokenize( line );

    Command::Arguments args;
    std::string cmdName = getNext( tokens );

    while ( ! tokens.empty() )
    {
        const Token argName = getNext( tokens );
        Token argValue = getNext( tokens );
        if ( Utils::isConvertibleToInt( argValue ) )
        {
            args[ argName ] = std::stoi( argValue );
        }
        else
        {
            args[ argName ] = argValue;
        }
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

std::string Parser::getLine( std::istream& is )
{
    std::string line;
    std::getline( is, line );
    return line;
}

} // namespace CLI
