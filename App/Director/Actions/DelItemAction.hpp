#ifndef DEl_ITEM_ACTION_HPP
#define DEl_ITEM_ACTION_HPP

#include "Action.hpp"
#include "../../Application.hpp"
#include "../../Document/Document.hpp"

#include <memory>

class DelItemAction : public Action
{
public:
    DelItemAction( std::shared_ptr< Item > item, int slideId );
    
public:
    void exec() override;
    void reset() override;

private:
    int _slideId;
    std::shared_ptr< Item > _item;
};

#endif // DEl_ITEM_ACTION_HPP