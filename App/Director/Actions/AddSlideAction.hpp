#ifndef ADD_SLIDE_ACTION_HPP
#define ADD_SLIDE_ACTION_HPP

#include "Action.hpp"
#include "../../Application.hpp"
#include "../../Document/Document.hpp"

class AddSlideAction : public Action
{
public:
    AddSlideAction( std::shared_ptr< Slide > slide );
    
public:
    void exec() override;
    void reset() override;

private:
    std::shared_ptr< Slide > _slide;
};

#endif // ADD_SLIDE_ACTION_HPP