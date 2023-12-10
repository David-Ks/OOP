#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include "Slide.hpp"
#include "../Common/Exception/Exception.hpp"

#include <vector>
#include <memory>

class Document
{
public:
    using Slides = std::vector< std::shared_ptr< Slide > >;

    struct InvalidSlideIdException : Common::Exception { using Exception::Exception; };
    struct InvalidSlideException : Common::Exception { using Exception::Exception; };

public:
    void addSlide( std::shared_ptr< Slide > );
    void delSlide( std::shared_ptr< Slide > );
    int getIdBySlide( std::shared_ptr< Slide > ) const;
    std::shared_ptr< Slide > getSlideById( int ) const;
    const Slides& getSlides() const;

private:
    Slides _slides;
};

#endif // DOCUMENT_HPP