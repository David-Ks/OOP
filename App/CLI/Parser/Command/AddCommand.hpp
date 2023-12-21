#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"
#include "../../../Utils/helpers.hpp"

namespace CLI
{

class AddCommand : public Command
{
public:
    AddCommand( const Arguments& args );

public:
    void exec() override;

private:
    std::tuple< int, int > validate( const std::string& );
};

} // namespace CLI


#endif // ADD_COMMAND_HPP