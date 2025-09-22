#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <vector>

// TODO: Define a pure virtual class Shape with a virtual draw() method and a virtual destructor.
class Shape
{
    public:
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape /* TODO: Inherit from Shape */ 
{
    public:
    void draw() const override;
    // TODO: Override the draw() method to provide Rectangle-specific rendering.
};

class Circle : public Shape /* TODO: Inherit from Shape */ 
{
    public:
    void draw() const override;
    // TODO: Override the draw() method to provide Circle-specific rendering.
};

class ShapeComposite 
{
    private:
    std::vector<Shape*> shapes;
        // TODO: Declare a collection to hold Shape pointers.

    public:
    ShapeComposite();
    void addShape(Shape* shape);
    void render() const;
        // TODO: Declare a constructor for ShapeComposite.
        
        // TODO: Declare a method addShape() to add Shapes to the collection.

        // TODO: Declare a method render() to render all Shapes in the collection.
};

#endif  // SOLUTION_HPP_