#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <vector>
#include <unordered_map>

using CommandParams = std::unordered_map< std::string, std::string >;

inline std::vector< std::string > commandList { "ADD", "CHANGE", "DISPLAY", "EXIT", "LOAD", "REMOVE", "SAVE", "LIST" };

class Command
{
public:
    enum class Type : int
    {
        ADD,
        CHANGE,
        DISPLAY,
        EXIT,
        LOAD,
        REMOVE,
        SAVE,
        LIST
    };

public:
    Command( const CommandParams& params )
        : _params( params) {}
    virtual ~Command() {}

public:
    virtual void exec() = 0;

    static std::string toString( Type type )
    {
        return commandList[ static_cast< int >( type ) ];
    }

protected:
    CommandParams _params;
};

#endif // COMMAND_HPP