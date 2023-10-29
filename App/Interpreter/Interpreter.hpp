#ifndef INTERPRETER_HPP
#define INTERPRETER_HPP

#include <string>
#include <memory>

#include "Parser/Parser.hpp"
#include "Command/Factory/SimpleCommandFactory.hpp"

class Application;
class IOManager;
class Document;

class Interpreter
{
public:
    Interpreter( Application* app, Document* document, IOManager* iomanager )
        : _app( app )
        , _iomanager( iomanager )
        , _document( document )
    {}
public:
    std::unique_ptr< Command > interpret( const std::string& );

private:
    Parser _parser;
    Application* _app;
    IOManager* _iomanager;
    Document* _document;
};

#endif // INTERPRETER_HPP