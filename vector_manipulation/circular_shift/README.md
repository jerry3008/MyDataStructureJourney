# Circular Shift of Vector Elements

This program defines a C++ function that performs a circular shift on a vector of integers.

## Problem Description

Given:
- A vector of `n` integers.
- An integer `shift` indicating how many positions to rotate the elements.

### Requirements

- A **positive shift** rotates elements to the **right**.
- A **negative shift** rotates elements to the **left**.
- The shift is **circular**, meaning elements wrap around.

### Example

```cpp
Input: shiftListElements({1, 2, 3, 4, 5}, 2)
Output: {4, 5, 1, 2, 3}

Input: shiftListElements({1, 2, 3, 4, 5}, -1)
Output: {2, 3, 4, 5, 1}
