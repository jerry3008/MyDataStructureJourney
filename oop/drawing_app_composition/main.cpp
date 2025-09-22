#include "main.hpp"

// TODO: Implement Rectangle::draw() method to print "Rendering a rectangle".
void Rectangle::draw() const
{
    std::cout << "Rendering a rectangle"<<std::endl;
}
// TODO: Implement Circle::draw() method to print "Rendering a circle".
void Circle::draw() const
{
    std::cout << "Rendering a circle"<<std::endl;
}
// TODO: Implement ShapeComposite constructor.
ShapeComposite::ShapeComposite() {}


void ShapeComposite::addShape(Shape* shape) {
    shapes.push_back(shape);
}

void ShapeComposite::render() const {
    for (const auto& shape : shapes) {
        shape->draw();
    }
}
// TODO: Implement ShapeComposite::addShape() method to add a Shape to the collection.

// TODO: Implement ShapeComposite::render() method to iterate over the shapes in the collection and call their draw() methods.

int main() {
    ShapeComposite shapeComposite;
    
    // TODO: Create a ShapeComposite instance.
    shapeComposite.addShape(new Rectangle());
    shapeComposite.addShape(new Circle());
    // TODO: Add an instance of Rectangle and Circle to the composite.

    shapeComposite.render();
    // TODO: Render the shapes in the composite.
    return 0;
}