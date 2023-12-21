#include "DelItemAction.hpp"

DelItemAction::DelItemAction( std::shared_ptr< Item > item, int slideId )
    : _item( item )
    , _slideId( slideId ) {}

void DelItemAction::exec()
{
    Application::getInstance()->getDocument()->getSlideById( _slideId )->delItem( _item );
}

void DelItemAction::reset()
{
    Application::getInstance()->getDocument()->getSlideById( _slideId )->addItem( _item );
}
