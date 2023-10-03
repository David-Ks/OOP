#ifndef COMMAMD_FACTORY_HPP
#define COMMAND_FACTORY_HPP

#include <string>

#include "../AddCommand.hpp"
// #include "../../Shape/Shape.hpp"

class SimpleCommandFactory
{
public:
    static Command* create( const CommandParams& );
};

#endif // COMMAND_FACTORY_HPP