# Promotional Product Inheritance (C++)

This task enhances a basic product system by introducing inheritance to support promotional products in an online marketplace.

The existing `Product` class handles product name and price. The new `PromotionalProduct` subclass extends this functionality by adding promotional messaging and discount handling.


## Objective

Extend the existing system by:

- Creating a subclass `PromotionalProduct` that inherits from `Product`
- Adding support for:
  - Promotional message
  - Discount percentage
- Implementing a method:
addPromotion(const std::string& message, double discount)

- Overriding the `display()` method to include promotion details and final price


## Functional Requirements

### Base Class: Product
- Stores:
- Product name
- Product price
- Provides:
- Method to display product details

### Subclass: PromotionalProduct
- Inherits all properties of `Product`
- Adds:
- Promotional message
- Discount percentage
- Implements:
- `addPromotion(message, discount)`
- Overrides:
- `display()` to include:
  - Product name
  - Original price
  - Promotional message
  - Final price after discount


## Output Format

The `display()` method for a promotional product should output:


Name: <product_name>
Original Price: <price>
Promotion: <message>
Discount: <discount_percentage>%
Final Price: <price_after_discount>


## Design Focus

- Inheritance and code reuse
- Method overriding
- Extending functionality without modifying existing classes
- Encapsulation of promotional logic


## Expected Outcome

After implementation, the system should:

- Maintain original `Product` behavior unchanged
- Support enhanced promotional products through subclassing
- Correctly compute and display discounted prices
- Provide a clean and extensible class hierarchy


## Key Concepts

- Inheritance
- Method overriding
- Code reuse
- Extension without modification (Open/Closed Principle)


## Build and Run

g++ -std=c++17 oop/promotional_product_inheritance/main.cpp -o promotional_product
./promotional_product
Notes
This task belongs under OOP.
Do not modify the original Product class behavior.
Focus on extending functionality using inheritance.
Ensure correct calculation of final price after discount.