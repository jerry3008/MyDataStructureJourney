#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
class Shape 
{
    public:
    virtual ~Shape(){}
    virtual void draw() = 0;  
};


class Circle : public Shape 
{
    void draw() override
    {
        std::cout<<"Drawing a Circle."<<std::endl;
    }
    
};
class Square : public Shape 
{
    void draw() override
    {
        std::cout<<"Drawing a Square."<<std::endl;
    }
    
};

#endif // SHAPE_H