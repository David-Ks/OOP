#include "AddCommand.hpp"

#include "../../Document/Document.hpp"
#include "../../Document/Shape/Factory/SimpleShapeFactory.hpp"

#include <memory>

void AddCommand::exec()
{
    if ( _params.at( "-type" ) == "Slide" )
    {
        _document->addSlide( std::make_shared< Slide >() );
    }
    else if ( _params.at( "-type" ) == "Shape" )
    {
        auto shape = SimpleShapeFactory::create( _params );
        auto slide = _document->getSlide( std::stoi( _params.at( "-SlideId" ) ) );
        slide->addShape( std::move( shape ) );
    }
}