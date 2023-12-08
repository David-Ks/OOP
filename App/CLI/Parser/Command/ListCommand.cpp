#include "ListCommand.hpp"

namespace CLI
{

ListCommand::ListCommand( const Arguments& args )
    : Command( args ) {}

void ListCommand::exec()
{
    auto id = std::get_if< std::string >( &_args.at( "-id" ) );
    if ( ! id )
    {
        throw InvalidArgumentException( "The -type argument is undefined." );
    }
}

} // namespace CLI
