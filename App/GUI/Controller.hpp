#ifndef GUI_CONTROLLER_HPP
#define GUI_CONTROLLER_HPP

#include "../Common/Controller/ControllerBase.hpp"

namespace GUI
{

class Controller : public Common::ControllerBase
{
public:
    void run() override;
    void exit() override;
    std::istream& input() override;
    std::ostream& output() override;
};

} // namespace GUI


#endif // GUI_CONTROLLER_HPP