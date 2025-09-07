#include "main.hpp"

// Override methods with correct implementations
template<typename T>
std::string Triangle<T>::paint() const {
    return "Painting a triangle with base " + std::to_string(base) + " and height " + std::to_string(height);
}

// TODO: Implement Ellipse<T>::paint()
template<typename T>
std::string Ellipse<T>::paint() const {
    return "Painting an ellipse with major axis " + std::to_string(major_axis) + " and minor axis " + std::to_string(minor_axis);

}


// TODO: Implement Rectangle<T>::paint()
template<typename T>
std::string Rectangle<T>::paint() const {
    return "Painting a rectangle with width " + std::to_string(width) + " and height " + std::to_string(height);
}

// TODO: Implement function to print painting messages of a shape
template<typename T>
void describeShape(GraphicShape<T>* shape) 
{
    std::cout << shape->paint() << std::endl;
}



int main() {
    Triangle<double> triangle(10.0, 5.0);
    Ellipse<float> ellipse(7.0f, 3.0f);
    Rectangle<int> rectangle(8, 4);

    describeShape(&triangle);
    describeShape(&ellipse);
    describeShape(&rectangle);

    return 0;
}