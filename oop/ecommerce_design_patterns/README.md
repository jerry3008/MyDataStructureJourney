# E-Commerce Platform with Adapter, Composite, and Decorator Patterns (C++)

This task builds a flexible e-commerce platform using three Object-Oriented Design Patterns: Adapter, Composite, and Decorator.

The goal is to standardize payment integrations, support individual products and bundled products, and dynamically extend product behavior with features such as promotions, discounts, and gift wrapping.

---

## Objective

Implement the required components using the following design patterns:

- Adapter Pattern
- Composite Pattern
- Decorator Pattern

Follow the TODO comments in the starter code and preserve the intended behavior of the system.

---

## Adapter Pattern

The Adapter Pattern is used to standardize communication with different payment gateways.

Supported gateways include:

- PayPal
- Stripe
- Square

Each payment provider may expose a different API or data format.

The adapters should provide a consistent interface so the rest of the application can process payments without depending directly on gateway-specific implementations.

---

## Composite Pattern

The Composite Pattern is used to represent the product catalog.

A catalog entry can represent:

- An individual product
- A bundle containing multiple products

The goal is to allow individual products and collections of products to be treated through a consistent interface.

This makes it easier to calculate values or perform operations on both standalone items and product bundles.

---

## Decorator Pattern

The Decorator Pattern is used to add optional features to products without modifying their original implementation.

Examples include:

- Promotions
- Discounts
- Gift wrapping

Decorators should wrap existing product objects and extend their behavior dynamically.

---

## Design Focus

This task emphasizes:

- Interface standardization
- Runtime polymorphism
- Composition
- Extensibility
- Loose coupling
- Reusable object-oriented design

---

## Expected Outcome

After implementation, the application should:

- Process payments through multiple gateways using one consistent interface
- Support both individual products and product bundles
- Dynamically apply additional product features
- Keep payment, catalog, and product-extension logic separated
- Allow future gateways, product types, and decorators to be added with minimal changes

---

## Key Concepts

### Adapter
Converts incompatible interfaces into a common interface expected by the application.

### Composite
Allows individual objects and groups of objects to be treated uniformly.

### Decorator
Adds responsibilities to an object dynamically without modifying the original class.

---

## Build and Run

```bash
g++ -std=c++17 oop/ecommerce_design_patterns/main.cpp -o ecommerce_patterns
./ecommerce_patterns
Notes
This task belongs under OOP.
Keep each pattern responsible for a distinct part of the application.
Avoid tightly coupling payment gateways to client code.
Design product bundles so they can contain individual products or other compatible catalog components.
Product decorators should extend existing behavior rather than duplicate it.