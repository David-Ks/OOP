#include "ListCommand.hpp"

#include "../../Document/Document.hpp"
#include "../../Document/Shape/Factory/SimpleShapeFactory.hpp"

#include <memory>

void ListCommand::exec()
{
    if ( _params.at( "-type" ) == "Slide" )
    {
        auto slides = _document->getSlides();
    }
    else if ( _params.at( "-type" ) == "Shape" )
    {
        int id = std::stoi( _params.at( "-id" ) );
        auto slide = _document->getSlide( id );
        auto shapes = slide->getShapes();
    }
}