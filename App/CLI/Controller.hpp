#ifndef CLI_CONTROLLER_HPP
#define CLI_CONTROLLER_HPP

#include "../Common/Controller/ControllerBase.hpp"
#include "Parser/Parser.hpp"

#include <iostream>
#include <string>

namespace CLI
{

class Controller : public Common::ControllerBase
{
public:
    Controller();

public:
    void exit() override;
    void run() override;

private:
    std::string getInput();

private:
    bool _isExit;
};

} // namespace CLI


#endif // CLI_CONTROLLER_HPP