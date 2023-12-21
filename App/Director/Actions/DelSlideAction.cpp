#include "DelSlideAction.hpp"

DelSlideAction::DelSlideAction( std::shared_ptr< Slide > slide )
    : _slide( slide ) {}

void DelSlideAction::exec()
{
    Application::getInstance()->getDocument()->delSlide( _slide );
}

void DelSlideAction::reset()
{
    Application::getInstance()->getDocument()->addSlide( _slide );
}
