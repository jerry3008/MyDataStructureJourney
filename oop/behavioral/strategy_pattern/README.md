# Strategy Pattern - Smart Home Climate Control

This exercise demonstrates the Strategy design pattern in C++ using a smart home climate control system.

## Objective

The goal is to create a flexible climate control system that can switch between different temperature-control strategies without changing the controller itself.

The system supports:

- Heating strategy
- Cooling strategy
- Climate controller

## Components

### ClimateStrategy

`ClimateStrategy` is the abstract strategy interface.

It defines the common operation that all climate-control strategies must implement.

### HeatingStrategy

`HeatingStrategy` is a concrete strategy responsible for heating behavior.

### CoolingStrategy

`CoolingStrategy` is a concrete strategy responsible for cooling behavior.

### ClimateController

`ClimateController` acts as the context.

It stores the currently selected strategy and delegates climate-control behavior to that strategy.

## Pattern Structure

```text
              ClimateStrategy
              /             \
             /               \
            v                 v
   HeatingStrategy     CoolingStrategy
            \                 /
             \               /
              v             v
             ClimateController

Concepts Practiced
Strategy design pattern
Behavioral design patterns
Abstract classes
Inheritance
Polymorphism
Runtime behavior selection
Composition
Object-oriented design in C++
Why This Pattern Is Useful

The Strategy Pattern allows an object's behavior to be changed without modifying the object itself.

Instead of placing heating and cooling logic directly inside ClimateController, each behavior is encapsulated in a separate strategy class.

This makes the system easier to extend.

For example, additional strategies such as:

Energy-saving mode
Automatic climate mode
Eco heating
Ventilation

could be introduced without rewriting the controller.

Example Flow
ClimateController
        |
        | setStrategy()
        v
HeatingStrategy
        |
        | execute()
        v
Heat the home

The strategy can later be replaced:

ClimateController
        |
        | setStrategy()
        v
CoolingStrategy
        |
        | execute()
        v
Cool the home