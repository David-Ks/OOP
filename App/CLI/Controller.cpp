#include "Controller.hpp"

namespace CLI
{

Controller::Controller()
    : _isExit( false ) {}

void Controller::run()
{
    Parser cmdParser;

    while ( ! _isExit )
    {
        try
        {
            auto cmd = cmdParser.parse( getInput() );
            cmd->exec();
        }
        catch( const Common::Exception& exc )
        {
            std::cerr << exc.what() << '\n';
        }
    }
}

std::string Controller::getInput()
{
    std::string line;
    std::getline( std::cin, line );
    return line;
}

void Controller::exit()
{
    _isExit = true;
}

} // namespace CLI
