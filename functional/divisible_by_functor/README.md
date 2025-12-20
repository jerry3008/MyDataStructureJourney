# divisible_by Functor (C++)

This task focuses on creating a reusable functor class that checks divisibility and using it to filter a list of integers.
You will implement a `divisible_by` functor and print only the integers divisible by a given divisor.

---

## Objective

1. Create a functor class `divisible_by` that stores a divisor.
2. The functor must return `true` if a given integer is divisible by the stored divisor.
3. Use the functor to filter a list of integers.
4. Print only the integers that satisfy the divisibility condition.
5. Complete the missing sections marked by TODOs in the starter code.

---

## Requirements

- Implement a functor class (not a lambda) named `divisible_by`
- The divisibility condition is:
  - `value % divisor == 0`
- Print matching values in the order they appear in the input list
- Follow the TODO comments in the starter code

---

## Example Scenario

### Input
Numbers:
[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12]

makefile
Copy code

Divisor:
3

shell
Copy code

### Output
3 6 9 12

---

## Expected Behavior

| Component | Behavior |
|----------|----------|
| divisible_by(divisor) | Stores the divisor and checks divisibility |
| Filter step | Keeps only values where `value % divisor == 0` |
| Print step | Outputs all kept values |

---

## Build and Run

g++ -std=c++17 functional/divisible_by_functor/main.cpp -o divisible_by
./divisible_by
Notes
Handle edge cases appropriately (for example, divisor = 0) according to the starter code expectations.

This task is focused on C++ functors and predicate-based filtering.

It is not a data structures and algorithms problem.