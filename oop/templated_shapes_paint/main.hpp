#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <string>
#include <vector>

// Base class template
template<typename T>
class GraphicShape {
public:
    virtual std::string paint() const = 0; // virtual function making GraphicShape an abstract class
    virtual ~GraphicShape() {};            // virtual destructor for safe polymorphic use
};

// Derived class templates
template<typename T>
class Triangle : public GraphicShape<T> {
private:
    T base, height;
public:
    Triangle(T b, T h) : base(b), height(h) {}

    std::string paint() const override;
};

// TODO: Define Ellipse class derived from GraphicShape, with two generic (via templates) attributes major_axis and minor_axis and a paint() method
template<typename T>
class Ellipse : public GraphicShape<T>
{
    private:
    T major_axis, minor_axis;
    public:
    Ellipse(T maj, T mino)  :  major_axis(maj), minor_axis(mino) {}
    
    std::string paint() const override;
    
};

// TODO: Define Rectangle class derived from GraphicShape, with two generic (via templates) attributes width and height and a paint() method

template<typename T>
class Rectangle : public GraphicShape<T>
{
    private:
    T width, height;
    public:
    Rectangle(T wid, T heigh)  :  width(wid), height(heigh) {}
    
    std::string paint() const override;
    
};
template<typename T>
void describeShape(GraphicShape<T>* shape);


#endif  // SOLUTION_HPP_