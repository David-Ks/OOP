#ifndef SHAPE_LIBRARY_HPP
#define SHAPE_LIBRARY_HPP

#include "../ShapeBase.hpp"
#include "../../../Utils/Exception.hpp"
#include "../../../Document/Item.hpp"

#include <memory>
#include <unordered_map>

class ShapeLib 
{
public:
    struct InvalidShapeException : Utils::Exception { using Exception::Exception; };

public:
    static ShapeLib* instance();

    std::shared_ptr< ShapeBase > get( std::shared_ptr< Item > item );

private:
    ShapeLib();
    ~ShapeLib();
    ShapeLib(const ShapeLib&) = delete;
    ShapeLib& operator=(const ShapeLib&) = delete;
    friend std::shared_ptr<ShapeLib> std::make_shared<ShapeLib>();

private:
    std::unordered_map< std::string, std::shared_ptr< ShapeBase > > _shapes;
};


#endif // SHAPE_LIBRARY_HPP