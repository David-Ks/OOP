#ifndef CONTROLLER_BASE_HPP
#define CONTROLLER_BASE_HPP

#include <iostream>

namespace Common
{

class ControllerBase
{

public:
    virtual ~ControllerBase() {}

public:
    virtual void run() = 0;
    virtual void exit() = 0;
    virtual std::istream& input() = 0;
    virtual std::ostream& output() = 0;
};

} // namespace Common

#endif // CONTROLLER_BASE_HPP