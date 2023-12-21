#ifndef DEl_SLIDE_ACTION_HPP
#define DEl_SLIDE_ACTION_HPP

#include "Action.hpp"
#include "../../Application.hpp"
#include "../../Document/Document.hpp"

#include <memory>

class DelSlideAction : public Action
{
public:
    DelSlideAction( std::shared_ptr< Slide > slide );
    
public:
    void exec() override;
    void reset() override;

private:
    std::shared_ptr< Slide > _slide;
};

#endif // DEl_SLIDE_ACTION_HPP