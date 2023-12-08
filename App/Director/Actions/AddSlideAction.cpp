#include "AddSlideAction.hpp"

AddSlideAction::AddSlideAction( std::shared_ptr< Slide > slide )
    : _slide( slide ) {}

void AddSlideAction::exec()
{
    Application::getDocument()->addSlide( _slide );
}

void AddSlideAction::revert()
{
    Application::getDocument()->delSlide( _slide );
}
