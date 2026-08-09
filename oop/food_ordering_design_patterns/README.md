# Food Ordering System with Adapter, Composite, and Decorator Patterns (C++)

This project implements a flexible food ordering system using three Object-Oriented Design Patterns:

- Adapter
- Composite
- Decorator

The system integrates multiple food delivery platforms and payment gateways, supports individual and composite menu items, and allows menu items to be extended dynamically with additional features.

---

## Objective

Build a food ordering system that demonstrates how multiple design patterns can work together in one application.

The system should:

- Standardize different food delivery platforms
- Standardize payment gateway integrations
- Represent individual and grouped menu items uniformly
- Dynamically add features and modifications to menu items

---

## Adapter Pattern

The Adapter Pattern is used to provide a consistent interface for external services.

### Food Delivery Adapters

Supported delivery platforms include:

- Uber Eats
- DoorDash
- GrubHub

Expected adapter classes include:

- `UberEatsAdapter`
- `DoorDashAdapter`
- `GrubHubAdapter`

Each adapter should translate the platform-specific interface into the interface expected by the food ordering system.

---

## Payment Adapters

Different payment gateways may expose different APIs.

Payment adapters should provide a unified payment processing interface so the rest of the application does not depend directly on gateway-specific implementations.

---

## Composite Pattern

The Composite Pattern is used to represent menu structures.

The base component is:

```cpp
MenuComponent

The system should support:

Individual menu items
Burger
Fries
Composite menu items
MealCombo

Individual items and combinations should be managed through the same interface.

Decorator Pattern

The Decorator Pattern allows additional features to be applied dynamically to menu items.

Supported decorators include:

ChiliSauceDecorator
CheeseDecorator
BaconDecorator
VeganDecorator
GlutenFreeDecorator

Decorators should extend existing menu items without modifying their original classes.

Project Structure
FoodDelivery.hpp
    Core food delivery interfaces and platform definitions

FoodDeliveryAdapter.hpp
    UberEats, DoorDash, and GrubHub adapters

Payment.hpp
    Core payment interfaces

PaymentAdapter.hpp
    Payment gateway adapters

MenuComponent.hpp
    Base menu component and individual items

MenuComposite.hpp
    Composite menu structures such as MealCombo

MenuDecorator.hpp
    Menu item decorators and additional features

solution.cpp
    Main application and usage
Design Focus

This project emphasizes:

Interface standardization
Runtime polymorphism
Composition
Extensibility
Loose coupling
Separation of responsibilities
Reusable object-oriented architecture
Expected Outcome

After implementation, the system should:

Process food delivery orders through a consistent interface
Support multiple payment gateways
Treat individual menu items and meal combinations uniformly
Dynamically add toppings, dietary options, and other features
Allow future delivery platforms, payment providers, menu items, and decorators to be added with minimal changes
Key Concepts
Adapter

Transforms different external APIs into interfaces expected by the application.

Composite

Allows individual objects and groups of objects to be treated uniformly.

Decorator

Adds responsibilities and behavior to objects dynamically without modifying their original implementation.

Build and Run
g++ -std=c++17 oop/food_ordering_design_patterns/solution.cpp -o food_ordering
./food_ordering
Notes
This task belongs under OOP.
Keep each design pattern responsible for a distinct part of the system.
Prefer interfaces and abstractions over direct dependencies on concrete implementations.
The project structure is designed to keep responsibilities separated across multiple header files.