#ifndef PARSER_HPP
#define PARSER_HPP

#include "../../Utils/Exception.hpp"
#include "../../Utils/helpers.hpp"
#include "Command/Factory/CommandFactory.hpp"
#include "Command/Command.hpp"

#include <memory>
#include <deque>
#include <istream>
#include <sstream>

namespace CLI
{

class Parser
{
public:
    struct InvalidTokenException : Utils::Exception { using Exception::Exception; };
    struct EmptyLineException : Utils::Exception { using Exception::Exception; };

    using Token = std::string;
    using Tokens = std::deque< Token >;

public:
    Parser();

public:
    std::unique_ptr< Command > parse( std::istream& line );

private:
    static std::string getLine( std::istream& );
    Tokens tokenize( const std::string& );
    Token getNext( Tokens& );
};

} // namespace CLI

#endif // PARSER_HPP