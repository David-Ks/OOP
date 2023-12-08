#ifndef DEl_ITEM_ACTION_HPP
#define DEl_ITEM_ACTION_HPP

#include "Action.hpp"
#include "../../Application.hpp"
#include "../../Document/Document.hpp"

#include <memory>

class DelItemAction : public Action
{
public:
    DelItemAction( int itemId, int slideId );
    
public:
    void exec() override;
    void revert() override;

private:
    int _itemId;
    int _slideId;
    std::shared_ptr< Item > deleted;
};

#endif // DEl_ITEM_ACTION_HPP