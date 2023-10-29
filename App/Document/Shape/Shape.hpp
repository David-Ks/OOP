#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>
#include <vector>

class Shape
{
public:
    Shape() {}
    virtual ~Shape() {}

public:
    virtual std::string getProto() const = 0;

public:
    void setLineStyle( const std::string& style )
    {
        _lineStyle = style;
    }

    std::string getLineStyle() const
    {
        return _lineStyle;
    }    

private:
    std::string _lineStyle;
};


using Shapes = std::vector< Shape* >;

#endif // SHAPE_HPP