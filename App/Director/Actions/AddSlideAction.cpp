#include "AddSlideAction.hpp"

AddSlideAction::AddSlideAction( std::shared_ptr< Slide > slide )
    : _slide( slide ) {}

void AddSlideAction::exec()
{
    Application::getInstance()->getDocument()->addSlide( _slide );
}

void AddSlideAction::reset()
{
    Application::getInstance()->getDocument()->delSlide( _slide );
}
