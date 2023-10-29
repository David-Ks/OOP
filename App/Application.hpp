#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Interpreter/Interpreter.hpp"
#include "Document/Document.hpp"
#include "IO/IOManager.hpp"

class Application
{
public:
    Application();

public:
    void run();

private:
    IOManager _io;
    Document _document;
    Interpreter _interpreter;
};

#endif // APPLICATION_HPP