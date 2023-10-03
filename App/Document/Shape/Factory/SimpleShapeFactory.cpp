#include "SimpleShapeFactory.hpp"

Shape* SimpleShapeFactory::create( const Attributes& params )
{
    auto shapeName = params.at( "-name" );
    Shape* shape;

    if ( shapeName == "Rect" )
    {
        shape = new Rectangle;   
    }

    if ( params.find("-LColor") != params.end() )
    {
        shape->setLineColor( params.at( "-LColor" ) );
    }
    if ( params.find("-LWidth") != params.end() )
    {
        shape->setLineWidth( params.at( "-LWidth" ) );
    }
    if ( params.find("-FColor") != params.end() )
    {
        shape->setFillColor( params.at( "-FColor" ) );
    }
    if ( params.find("-LStyle") != params.end() )
    {
        shape->setStyle( params.at( "-LStyle" ) );
    }

    return shape;
}