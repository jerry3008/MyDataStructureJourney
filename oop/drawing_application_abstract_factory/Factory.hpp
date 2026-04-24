#ifndef FACTORY_H
#define FACTORY_H

#include "Shape.hpp"
#include "Color.hpp"

class DrawingFactory
{
    public:
    virtual ~DrawingFactory(){}
    virtual Shape* createShape() = 0;
    virtual Color* createColor() = 0;
    
};


class GeometricFactory: public DrawingFactory
{
    Shape* createShape() override
    {
       return new Circle; 
    }
    
    Color* createColor() override
    {
        return new Red;
    }
};
class ArtisticFactory : public DrawingFactory
{
    Shape* createShape() override
    {
       return new Square; 
    }
    Color* createColor() override
    {
        return new Blue;
    }
    
};



#endif // FACTORY_H