LightSource Abstract Class & Lamp Implementation
Task

Implement a LightSource abstract class with a pure virtual method:

turn_on() → must be implemented by derived classes.

Create a derived Lamp class:

Implements turn_on() to return "Lamp is switched on.".

In main, instantiate a Lamp object and call turn_on().

Constraints

Use abstract base class (virtual method = 0).

Derived class must override and implement.

Demonstrate polymorphism by calling via base pointer/reference.

Example
LightSource* light = new Lamp();
std::cout << light->turn_on(); 