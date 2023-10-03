#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>
#include <vector>

class Shape
{
public:
    Shape() : id( ++idCounter ) {}
    virtual ~Shape() {}

public:
    virtual void setLineColor( const std::string& ) = 0;
    virtual void setLineWidth( const std::string& ) = 0;
    virtual void setFillColor( const std::string& ) = 0;
    virtual void setStyle( const std::string& ) = 0;
    virtual std::string getProto() const = 0;

public:
    int getId() const { return id; }

private:
    static int idCounter;
    int id;
};

int Shape::idCounter = 0;

using Shapes = std::vector< Shape* >;

#endif // SHAPE_HPP