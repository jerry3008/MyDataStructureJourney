# Observer Pattern - Smart Home Security System

This exercise demonstrates the Observer design pattern in C++ using a smart home security system.

## Objective

The goal is to create a security system that automatically notifies registered homeowners whenever an intrusion is detected.

## Components

### SecuritySystem

`SecuritySystem` acts as the subject (publisher).

It maintains a collection of observers and notifies them when an intrusion occurs.

### HomeOwner

`HomeOwner` acts as an observer (subscriber).

Each homeowner receives a notification when the security system detects an intrusion.

## Observer Pattern

The Observer Pattern establishes a one-to-many relationship between objects.

When the state of the subject changes, all registered observers are automatically notified.

```text
                    SecuritySystem
                     (Subject)
                         |
              Intrusion detected
                         |
                 notifyObservers()
                         |
              +----------+----------+
              |          |          |
              v          v          v
          HomeOwner  HomeOwner  HomeOwner
          Observer   Observer   Observer

          Concepts Practiced
Observer design pattern
Behavioral design patterns
Abstract interfaces
Inheritance
Polymorphism
One-to-many relationships
Event notification
Object-oriented design in C++
Why This Pattern Is Useful

The Observer Pattern allows objects to react to events without tightly coupling the event producer to every object that needs the information.

For example, the SecuritySystem does not need to know how each HomeOwner handles an intrusion alert. It only needs to notify all registered observers.

This makes the system easier to extend because additional observers can be added without changing the core security system.