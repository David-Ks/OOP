#include "SimpleShapeFactory.hpp"

std::unique_ptr< Shape > SimpleShapeFactory::create( const Attributes& params )
{
    auto shapeName = params.at( "-name" );
    std::unique_ptr< Shape > shape;

    if ( shapeName == "Rect" )
    {
        shape = std::make_unique< Rectangle >();   
    }

    if ( params.find("-LStyle") != params.end() )
    {
        shape->setLineStyle( params.at( "-LStyle" ) );
    }

    return shape;
}