Polymorphic Universe: Pentagon & Hexagon
Task

Implement a polymorphic mini-universe of geometric shapes in C++:

Base class: GraphicShape

Declares a virtual method, e.g., introduce(), for shapes to describe themselves.

Derived classes:

Pentagon — implements introduce() with a message identifying itself as a pentagon.

Hexagon — implements introduce() with a message identifying itself as a hexagon.

Main function:

Create a std::vector<GraphicShape*> and populate it with instances of Pentagon and Hexagon.

Demonstrate polymorphism by iterating through the vector and calling introduce() on each shape.

Constraints

Must demonstrate inheritance and polymorphism.

Use dynamic polymorphism (virtual methods).

Ensure clean memory management (e.g., smart pointers).

Example
Pentagon introduces itself → "I am a Pentagon with 5 sides!"
Hexagon introduces itself → "I am a Hexagon with 6 sides!"