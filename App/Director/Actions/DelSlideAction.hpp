#ifndef DEl_SLIDE_ACTION_HPP
#define DEl_SLIDE_ACTION_HPP

#include "Action.hpp"
#include "../../Application.hpp"
#include "../../Document/Document.hpp"

#include <memory>

class DelSlideAction : public Action
{
public:
    DelSlideAction( int slideId );
    
public:
    void exec() override;
    void revert() override;

private:
    int _slideId;
    std::shared_ptr< Slide > deleted;
};

#endif // DEl_SLIDE_ACTION_HPP