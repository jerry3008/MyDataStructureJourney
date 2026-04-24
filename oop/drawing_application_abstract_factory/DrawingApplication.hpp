#ifndef DRAWINGAPPLICATION_H
#define DRAWINGAPPLICATION_H

#include "Color.hpp"
#include "Factory.hpp"

class DrawingApplication 
{
    private:
    DrawingFactory* factory;
    Shape* shape;
    Color* color;
    
    public:
    DrawingApplication(DrawingFactory* d): factory(d)
    {
        shape = factory->createShape();
        color = factory -> createColor();
    }
    
    void render()
    {
       shape -> draw();
       color -> fill();  
    }
    ~DrawingApplication()
    {
        delete color;
        delete shape;
    }
    
};

 

#endif // DRAWINGAPPLICATION_H