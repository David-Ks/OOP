#ifndef ACTION_HPP
#define ACTION_HPP

#include <variant>
#include <map>

class Action
{
public:
    virtual ~Action() {}

public:
    virtual void exec() = 0;
    virtual void reset() = 0;
};

#endif // ACTION_HPP