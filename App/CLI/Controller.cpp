#include "Controller.hpp"

namespace CLI
{

Controller::Controller( std::istream& input, std::ostream& output )
    : _isExit( false )
    , _input( input )
    , _output( output ) {}

void Controller::run()
{
    while ( ! _isExit )
    {
        try
        {
            auto cmd = Parser::parse( input() );
            cmd->exec();
        }
        catch( const Common::Exception& exc )
        {
            output() << ( exc.what() );
        }
    }
}

std::istream& Controller::input()
{
    return _input;
}

std::ostream& Controller::output()
{
    return _output;
}

void Controller::exit()
{
    _isExit = true;
}

} // namespace CLI
