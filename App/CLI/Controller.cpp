#include "Controller.hpp"

namespace CLI
{

Controller::Controller( std::istream& is, std::ostream& os )
    : _isExit( false ) 
    , _is( is )
    , _os( os ) {}

void Controller::run()
{
    Parser cmdParser;

    while ( ! _isExit )
    {
        try
        {
            auto cmd = cmdParser.parse( _is );
            cmd->exec();
        }
        catch( const Utils::Exception& err )
        {
            _os << err.what() << '\n';
        }
        catch( const std::out_of_range& err )
        {
            _os << err.what() << '\n';
        }
    }
}

void Controller::exit()
{
    _isExit = true;
}

std::istream& Controller::getIStream()
{
    return _is;
}

std::ostream& Controller::getOStream()
{
    return _os;
}

} // namespace CLI
