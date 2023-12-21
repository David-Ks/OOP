#ifndef ADD_ITEM_ACTION_HPP
#define ADD_ITEM_ACTION_HPP

#include "Action.hpp"
#include "../../Application.hpp"
#include "../../Document/Document.hpp"

#include <memory>

class AddItemAction : public Action
{
public:
    AddItemAction( std::shared_ptr< Item > item, int slideId );
    
public:
    void exec() override;
    void reset() override;

private:
    std::shared_ptr< Item > _item;
    int _slideId;
};

#endif // ADD_ITEM_ACTION_HPP