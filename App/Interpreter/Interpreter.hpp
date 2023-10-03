#ifndef INTERPRETER_HPP
#define INTERPRETER_HPP

#include <string>

#include "Parser/Parser.hpp"
#include "Command/Factory/SimpleCommandFactory.hpp"

class Interpreter
{
public:
    Command* interpret( const std::string& );

private:
    Parser parser;
};

#endif // INTERPRETER_HPP