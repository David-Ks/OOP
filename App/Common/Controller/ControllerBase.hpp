#ifndef CONTROLLER_BASE_HPP
#define CONTROLLER_BASE_HPP

namespace Common
{

class ControllerBase
{

public:
    virtual ~ControllerBase() {}
    virtual void exit() = 0;
    virtual void run() = 0;
};

enum class ControllerType
{
    CLI,
    GUI
};

} // namespace Common

#endif // CONTROLLER_BASE_HPP