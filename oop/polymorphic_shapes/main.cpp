#include "main.hpp"

// TODO: Implement the draw method for the Circle class
// It should return a string indicating a circle is being drawn
std::string Circle::draw() const
 {
    return "Drawing a Circle";
 }

// TODO: Implement the draw method for the Square class
// It should return a string indicating a square is being drawn
 std::string Square::draw() const
 {
    return "Drawing a square";
 }

int main() {
    // TODO: Create a vector of GraphicObject pointers with instances of Circle and Square
    std::vector<GraphicObject*> shapes;
    shapes.push_back(new Circle());
    shapes.push_back(new Square());
     
    // Instantiate the shapes vector with new Circle() and new Square() objects

    for (auto shape : shapes) {
        std::cout << shape->draw() << std::endl;
    }

    return 0;
}