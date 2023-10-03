#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include "ShapeStorage.hpp"

class Document
{
public:
    Document();

private:
    ShapeStorage shapes;
};

#endif // DOCUMENT_HPP