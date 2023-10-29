#include "Parser.hpp"

auto Parser::tokenize( const std::string& line ) -> Tokens
{
    std::istringstream iss(line);
    Tokens tokens;

    for ( Token token; std::getline(iss, token, _tokenSep); )
    {
        tokens.push_back(token);
    }

    return tokens;
}

auto Parser::parse( Tokens tokens ) const -> CommandParams
{
    CommandParams params;

    OptToken token = getNextToken( tokens );

    if ( token.has_value() && isCommand( token.value() ) )
    {
        params[ "name" ] = token.value();
    }
    else
    {
        throw std::runtime_error( "Invalid Command." );
    }

    for ( token = getNextToken( tokens ) ; token.has_value(); token = getNextToken( tokens ) )
    {
        if ( isParam( token.value() ) )
        {
            const auto paramToken = token.value();
            const auto valueToken = getNextToken( tokens );

            if ( valueToken.has_value() )
            {
                params[ paramToken ] = valueToken.value();
            }
            else
            {
                throw std::runtime_error( "Invalud value." );
            }
        }
        else
        {
            throw std::runtime_error( "Invalid param." );
        }
    }

    return params;
}

auto Parser::getNextToken( Tokens& tokens ) const -> OptToken
{
    if ( !tokens.empty() )
    {
        Token nextToken = tokens.front();
        tokens.pop_front();
        return nextToken; 
    }

    return {};
}

char Parser::getSeparator() const
{
    return _tokenSep;
}

void Parser::setSeparator( char sep )
{
    _tokenSep = sep;
}

bool Parser::isCommand( const std::string& str ) const
{
    return std::find( commandList.begin(), commandList.end(), str ) != commandList.end();
}

bool Parser::isParam( const std::string& str ) const
{
    return str[0] == '-';
}