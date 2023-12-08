#include "DelItemAction.hpp"

DelItemAction::DelItemAction( int itemId, int slideId )
    : _itemId( itemId )
    , _slideId( slideId ) {}

void DelItemAction::exec()
{
    deleted = Application::getDocument()->getSlideById( _slideId )->getItemById( _itemId );
    Application::getDocument()->getSlideById( _slideId )->delItem( deleted );
}

void DelItemAction::revert()
{
    Application::getDocument()->getSlideById( _slideId )->delItem( deleted );
}
