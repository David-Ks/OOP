#ifndef REGEX_PARSER_HPP
#define REGEX_PARSER_HPP

#include <sstream>
#include <deque>
#include <optional>
#include <algorithm>

#include "../Command/Command.hpp"

class Parser
{
public:
    using Token = std::string;
    using Tokens = std::deque< Token >;
    using OptToken = std::optional<Token>;

public:
    Tokens tokenize( const std::string& );
    CommandParams parse( Tokens ) const;

public:
    char getSeparator() const;
    void setSeparator( char );

private:
    bool isCommand( const std::string& ) const;
    bool isParam( const std::string& ) const;

    OptToken getNextToken( Tokens& ) const;

private:
    char tokenSep = ' ';
};

#endif // REGEX_PARSER_HPP