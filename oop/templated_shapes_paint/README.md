Templated Shapes: Triangle, Ellipse, Rectangle
Task

Implement generic shape classes using C++ templates:

Base class template: GraphicShape<T> with a virtual-like interface for painting.

Derived templates:

Triangle<T> — std::string paint() describing base & height.

Ellipse<T> — std::string paint() describing major & minor axes.

Rectangle<T> — std::string paint() describing width & height.

Implement a function describeShape() that accepts a GraphicShape<T>* and prints the shape’s paint() result.

Requirements

Use class templates for Triangle<T>, Ellipse<T>, Rectangle<T>, and GraphicShape<T>.

paint() must include the dimensions using type T and return a descriptive string.

Provide a small demo in main.cpp that constructs each shape with different T (e.g., int, float, double) and calls describeShape() on them.

Prefer clean ownership (e.g., smart pointers) if using dynamic polymorphism.

Examples

Triangle<double>(base=10.0, height=5.0).paint() →
"Painting a triangle with base 10.0 and height 5.0"

Ellipse<float>(major=7.0f, minor=3.0f).paint() →
"Painting an ellipse with major axis 7.0 and minor axis 3.0"

Rectangle<int>(width=8, height=4).paint() →
"Painting a rectangle with width 8 and height 4"