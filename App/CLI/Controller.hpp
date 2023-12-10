#ifndef CLI_CONTROLLER_HPP
#define CLI_CONTROLLER_HPP

#include "../Common/Controller/ControllerBase.hpp"
#include "Parser/Parser.hpp"

#include <string>

namespace CLI
{

class Controller : public Common::ControllerBase
{
public:
    Controller( std::istream& input, std::ostream& output );

public:
    void run() override;
    void exit() override;
    std::istream& input() override;
    std::ostream& output() override;

private:
    bool _isExit;
    std::istream& _input;
    std::ostream& _output;
};

} // namespace CLI


#endif // CLI_CONTROLLER_HPP