# Adapter Pattern - Smart Home Devices

This exercise demonstrates the Adapter design pattern in C++ using a smart home system.

## Objective

The goal is to make different smart devices compatible with a common US plug interface without modifying the existing device classes.

The system contains:

- `Light`
- `Fan`
- US plug interface
- Adapter classes for each device

## Pattern Overview

The Adapter Pattern allows classes with incompatible interfaces to work together.

Instead of changing the original device classes, an adapter translates the expected interface into calls that the existing device understands.

## Structure

```text
USPlug
  ↑
  ├── LightAdapter → Light
  └── FanAdapter   → Fan

  Concepts Practiced
Adapter design pattern
Abstract interfaces
Inheritance
Polymorphism
Composition
Interface compatibility
Object-oriented design in C++
Why This Pattern Is Useful

The Adapter Pattern is useful when an existing class provides the functionality you need but exposes a different interface from the one required by the rest of your application.

Rather than modifying the original class, an adapter acts as a translation layer between the two interfaces.

Example

A Light and Fan may expose their own device-specific methods, while the smart home system expects everything to work through a common US plug interface.

The adapters make those devices compatible without changing their original implementations.