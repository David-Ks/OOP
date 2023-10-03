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
    IOManager io;
    Document doc;
    Interpreter interpreter;
};

#endif // APPLICATION_HPP