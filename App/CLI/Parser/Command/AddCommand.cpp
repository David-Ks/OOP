#include "AddCommand.hpp"
#include "../../../Director/Director.hpp"
#include "../../../Director/Actions/AddItemAction.hpp"
#include "../../../Director/Actions/AddSlideAction.hpp"

namespace CLI
{

AddCommand::AddCommand( const Arguments& args )
    : Command( args ) {}

void AddCommand::exec()
{
    auto type = std::get_if< std::string >( &_args.at( "-type" ) );
    if ( ! type )
    {
        throw InvalidArgumentException( "The -type argument is undefined." );
    }

    if ( *type == "slide" )
    {
        auto slide = std::make_shared< Slide >();
        auto action = std::make_shared< AddSlideAction >( slide );
        Application::getDirector()->exec( action );
    }
    else if ( *type == "item" )
    {
        auto slideId = std::get_if< int >( &_args.at( "-slide" ) );
        auto shape = std::get_if< std::string >( &_args.at( "-shape" ) );
        auto color = std::get_if< std::string >( &_args.at( "-color" ) );
        auto lt = std::get_if< int >( &_args.at( "-lt" ) );
        auto rb = std::get_if< int >( &_args.at( "-rb" ) );
        if ( ! shape || ! color || ! lt || ! rb || ! slideId )
        {
            throw InvalidArgumentException( "Arguments describing the Item are not defined." );
        }

        auto item = std::make_shared< Item >( *shape, Item::Position{ *lt, *rb }, *color );
        auto action = std::make_shared< AddItemAction >( item, *slideId );
        Application::getDirector()->exec( action );
    }
    else
    {
        throw InvalidArgumentValueException( "The value of the -type argument is incorrect." );
    }
}

} // namespace CLI
