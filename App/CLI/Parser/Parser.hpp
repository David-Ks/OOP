#ifndef PARSER_HPP
#define PARSER_HPP

#include "../../Common/Exception/Exception.hpp"
#include "Command/Factory/CommandFactory.hpp"
#include "Command/Command.hpp"

#include <memory>
#include <deque>
#include <sstream>

namespace CLI
{

class Parser
{
private:
    struct InvalidTokenException : Common::Exception { using Exception::Exception; };
    struct EmptyLineException : Common::Exception { using Exception::Exception; };

    using Token = std::string;
    using Tokens = std::deque< Token >;

public:
    static std::unique_ptr< Command > parse( std::istream& input );

private:
    static Token getNext( Tokens& );
    static Tokens tokenize( const std::string& );
};

} // namespace CLI

#endif // PARSER_HPP