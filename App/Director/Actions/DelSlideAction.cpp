#include "DelSlideAction.hpp"

DelSlideAction::DelSlideAction( int slideId )
    : _slideId( slideId ) {}

void DelSlideAction::exec()
{
    deleted = Application::getDocument()->getSlideById( _slideId );
    Application::getDocument()->delSlide( deleted );
}

void DelSlideAction::revert()
{
    Application::getDocument()->addSlide( deleted );
    _slideId = Application::getDocument()->getIdBySlide( deleted );
}
