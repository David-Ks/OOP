#ifndef CLI_CONTROLLER_HPP
#define CLI_CONTROLLER_HPP

#include "Parser/Parser.hpp"

#include <iostream>
#include <string>

namespace CLI
{

class Controller
{
public:
    Controller( std::istream& is, std::ostream& os );

public:
    void exit();
    void run();

public:
    std::istream& getIStream();
    std::ostream& getOStream();

private:
    bool _isExit;
    std::istream& _is;
    std::ostream& _os;
};

} // namespace CLI


#endif // CLI_CONTROLLER_HPP