# Factory Method Pattern in C++

This project demonstrates the Factory Method design pattern using C++.

## Overview

The Factory Method pattern provides an interface for creating objects while allowing derived factory classes to determine which concrete object should be created.

In this example, different device types are created through their corresponding factories.

## Components

### Device

`Device` is the abstract product interface.

It defines the common behavior that all devices must implement:

- `turnOn()`
- `turnOff()`

### Light

`Light` is a concrete implementation of `Device`.

It provides the behavior for turning a light on and off.

### Fan

`Fan` is another concrete implementation of `Device`.

It provides the behavior for turning a fan on and off.

### Factory

The factory abstraction defines the interface used to create devices.

Concrete factories determine which type of `Device` is returned.

### LightFactory

Creates `Light` objects.

### FanFactory

Creates `Fan` objects.

## Concepts Practiced

- Factory Method design pattern
- Abstract classes
- Pure virtual functions
- Inheritance
- Polymorphism
- Method overriding
- Object creation
- C++ class design

## Pattern Structure

Device
├── Light
└── Fan

Factory
├── LightFactory → Light
└── FanFactory → Fan

## Purpose

The purpose of this exercise is to separate object creation from object usage.

Instead of client code directly constructing specific device types, factories are responsible for creating the appropriate objects.

This makes the code easier to extend when new device types are introduced.