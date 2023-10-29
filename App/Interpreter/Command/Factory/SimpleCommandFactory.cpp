#include "SimpleCommandFactory.hpp"

std::unique_ptr< Command > SimpleCommandFactory::create( const CommandParams& params, Application* app, IOManager* io, Document* document )
{
    const auto name = params.at( "name" );
    
    if ( name == Command::toString( Command::Type::ADD ) )
    {
        return std::make_unique< AddCommand >( params, document );
    }
    else if ( name == Command::toString( Command::Type::REMOVE )  )
    {
        // TODO
    }
    else if ( name == Command::toString( Command::Type::DISPLAY ) )
    {
        // TODO
    }
    else if ( name == Command::toString( Command::Type::CHANGE ) )
    {
        // TODO
    }
    else if ( name == Command::toString( Command::Type::LIST ) )
    {
        // TODO
    }
    else if ( name == Command::toString( Command::Type::EXIT ) )
    {
        // TODO
    }
    else if ( name == Command::toString( Command::Type::SAVE ) )
    {
        // TODO
    }
    else if ( name == Command::toString( Command::Type::LOAD ) )
    {
        // TODO
    }

    return std::make_unique< NullCommand >();
}