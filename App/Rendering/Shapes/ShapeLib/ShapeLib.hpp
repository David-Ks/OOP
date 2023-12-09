#ifndef SHAPE_LIBRARY_HPP
#define SHAPE_LIBRARY_HPP

#include "../ShapeBase.hpp"
#include "../../../Common/Exception/Exception.hpp"

#include <memory>
#include <unordered_map>

class ShapeLib 
{
public:
    struct InvalidShapeException : Common::Exception { using Exception::Exception; };

public:
    static std::shared_ptr< ShapeLib > instance();

    std::shared_ptr< ShapeBase > get( const std::string& shape );

private:
    std::unordered_map< std::string, std::shared_ptr< ShapeBase > > _shapes;
};


#endif // SHAPE_LIBRARY_HPP