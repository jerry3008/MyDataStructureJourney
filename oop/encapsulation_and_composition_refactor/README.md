# OOP Refactoring with Encapsulation and Composition (C++)

This task focuses on improving an existing C++ codebase using Object-Oriented Programming principles, with special attention to encapsulation and composition.

The goal is to restructure the code into focused classes with clear responsibilities, reduce coupling between components, and increase cohesion within each class.

## Objective

Refactor the provided code by:

- Splitting responsibilities into appropriate classes
- Encapsulating internal data and behavior inside those classes
- Using composition to assemble higher-level functionality from smaller focused components
- Reducing direct dependencies between unrelated parts of the system
- Increasing clarity, modularity, and maintainability

## Core Design Goals

### Encapsulation
Encapsulation means keeping data and behavior together inside a class and exposing only what is necessary through a clean public interface.

Expected improvements:
- Hide implementation details
- Prevent outside code from directly manipulating internal state
- Make each class easier to reason about and maintain

### Composition
Composition means building complex behavior by combining smaller objects instead of placing all logic in one class.

Expected improvements:
- Better modularity
- Easier testing
- Lower coupling between components
- More flexible design than tightly connected procedural code

## Design Principles Targeted

### Reduce Coupling
Coupling refers to the level of dependency between classes or modules.

Lower coupling means:
- One class can change without forcing changes in many others
- Components are easier to reuse
- The codebase becomes easier to extend

### Increase Cohesion
Cohesion refers to how closely related the responsibilities inside a class are.

Higher cohesion means:
- Each class has one clear purpose
- Logic is grouped where it belongs
- The design is easier to understand

## Expected Refactoring Outcome

After refactoring, the code should demonstrate:

- Small, focused classes
- Clear ownership of data
- Public methods that define clean responsibilities
- Object composition instead of one large monolithic structure
- Improved readability and maintainability
## Build and Run

g++ -std=c++17 oop_and_patterns/encapsulation_and_composition_refactor/main.cpp -o oop_refactor
./oop_refactor
Notes

This task belongs to object-oriented design, not core data structures and algorithms.

Prefer clear class boundaries over overly clever abstractions.

Aim for readable design with practical separation of responsibilities.

Refactoring should preserve behavior while improving structure.