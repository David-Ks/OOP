#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include "Slide.hpp"
#include "../Utils/Exception.hpp"

#include <vector>
#include <memory>

class Document : public Serializable
{
public:
    using Slides = std::vector< std::shared_ptr< Slide > >;

    struct InvalidSlideIdException : Utils::Exception { using Exception::Exception; };

public:
    void addSlide( std::shared_ptr< Slide > );
    void delSlide( std::shared_ptr< Slide > );
    std::shared_ptr< Slide > getSlideById( int ) const;
    const Slides& getSlides() const;

public:
    QJsonObject toJson() const override;
    void fromJson( const QJsonObject& jsonObject ) override;

private:
    Slides _slides;
};

#endif // DOCUMENT_HPP