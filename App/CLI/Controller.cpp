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
            auto cmd = cmdParser.parse( input() );
            cmd->exec();
        }
        catch( const Common::Exception& exc )
        {
            std::cerr << exc.what() << '\n';
        }
    }
}

std::string Controller::input() const
{
    std::string line;
    std::getline( std::cin, line );
    return line;
}

void Controller::output( const std::string& text ) const
{
    std::cout << text << std::endl;
}

void Controller::exit()
{
    _isExit = true;
}

} // namespace CLI
