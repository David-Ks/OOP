#include "AddCommand.hpp"
#include "../../../Director/Actions/AddItemAction.hpp"
#include "../../../Director/Actions/AddSlideAction.hpp"

namespace CLI
{

AddCommand::AddCommand( const Arguments& args )
    : Command( args ) {}

void AddCommand::exec()
{
    auto type = std::get_if< std::string >( & Utils::get( _args, std::string{ "-type" } ) );
    if ( ! type )
    {
        throw InvalidArgumentException( "The -type argument is undefined." );
    }

    if ( *type == "slide" )
    {
        auto slide = std::make_shared< Slide >();
        auto action = std::make_shared< AddSlideAction >( slide );
        Application::getInstance()->getDirector()->exec( action );
    }
    else if ( *type == "item" )
    {
        auto slideId = std::get_if< int >( & Utils::get( _args, std::string{ "-slideId" } ) );
        auto shape = std::get_if< std::string >( & Utils::get( _args, std::string{ "-shape" } ) );
        auto color = std::get_if< std::string >( & Utils::get( _args, std::string{ "-color" } ) );
        auto ltPtr = std::get_if< std::string >( & Utils::get( _args, std::string{ "-lt" } ) );
        auto rbPtr = std::get_if< std::string >( & Utils::get( _args, std::string{ "-rb" } ) );

        if ( ! shape || ! color || ! ltPtr || ! rbPtr || ! slideId )
        {
            throw InvalidArgumentException( "Arguments describing the Item are not defined." );
        }

        auto lt = validate( *ltPtr );
        auto rb = validate( *rbPtr );

        auto item = std::make_shared< Item >( *shape, std::tuple_cat( lt, rb ), *color );
        auto action = std::make_shared< AddItemAction >( item, *slideId );
        Application::getInstance()->getDirector()->exec( action );
    }
    else
    {
        throw InvalidArgumentValueException( "The value of the -type argument is incorrect." );
    }
}

std::tuple< int, int > AddCommand::validate( const std::string& arg )
{
    int firstValue, secondValue;

    std::stringstream ss( arg );

    if ( ! ( ss >> firstValue ) ) 
    {
        throw InvalidArgumentException( "Invalid argument format" );
    }

    char comma;
    if ( ! ( ss >> comma ) || comma != ',' )
    {
        throw InvalidArgumentException( "Invalid argument format" );
    }

    if ( ! ( ss >> secondValue ) )
    {
        throw InvalidArgumentException( "Invalid argument format" );
    }

    return std::make_tuple( firstValue, secondValue );
}

} // namespace CLI
