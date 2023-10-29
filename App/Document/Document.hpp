#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include "Slide.hpp"

#include <memory>

class Document
{
    using Slides = std::vector< std::shared_ptr< Slide > >;

public:
    Document()
        : _current( -1 ) {}

public:
    std::shared_ptr< Slide > getSlide( int ) const;
    void addSlide( std::shared_ptr< Slide > );
    const Slides& getSlides() const;
    void delSlide( int );

private:
    Slides _slides;
    int _current;
};

#endif // DOCUMENT_HPP