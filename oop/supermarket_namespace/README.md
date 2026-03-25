# SuperMarket Namespace (C++)

This module demonstrates the use of a **namespace in C++** to organize related
functions in a modular and structured way.

---

## Objective

The goal is to group supermarket-related operations under a single namespace
called `SuperMarket` to improve code organization and readability.

---

## Features Implemented

### 1. Inventory Management

- `addItem(name, quantity)`
  - Adds an item and its quantity to the inventory

- `displayItems()`
  - Displays all items and their quantities

---

### 2. Checkout Operations

- `applyDiscount(total, discountRate)`
  - Applies a discount to the total amount
  - Returns the final discounted value

- `calculateTax(amount)`
  - Calculates tax using a fixed tax rate
  - Returns the total amount after tax

---

## Key Concept

### Namespace

A namespace is used to:
- Avoid naming conflicts
- Group related functionality
- Improve code structure

Example:
```cpp
SuperMarket::addItem("Apple", 10);