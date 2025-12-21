functional/boost_health_boost_functor/README.md:

# HealthBoost Functor with Boost.Range (C++)

This task simulates a game scenario inspired by a LOTR-based system.
You will create a functor that boosts character health values by a given factor and apply multiple boosts using Boost.Range utilities.

---

## Objective

1. Create a functor class named `HealthBoost`.
2. The functor should:
   - Store a multiplication factor
   - Increase a character’s health points by that factor
3. Create two instances of `HealthBoost`:
   - One with factor `1.2`
   - One with factor `1.5`
4. Apply the first boost to all characters and print their updated health values.
5. Apply the second boost to all characters and print their updated health values.
6. Complete all TODO sections in the starter code.

---

## Requirements

- Implement `HealthBoost` as a functor class (not a lambda).
- The functor should transform a numeric health value.
- Use Boost.Range utilities to apply transformations and iterate results:
  - `boost::transformed`
  - `boost::for_each`
- Preserve the order of characters.
- Print health values after each boost pass.

---

## Example Scenario

### Input
Character health points:


[100, 120, 80, 150]


### First Boost (factor = 1.2)


[120, 144, 96, 180]


### Second Boost (factor = 1.5)


[180, 216, 144, 270]


---

## Expected Behavior

| Step | Description |
|------|-------------|
| HealthBoost(1.2) | Increases health by 20% |
| HealthBoost(1.5) | Increases health by 50% |
| First pass | Prints health after 1.2x boost |
| Second pass | Prints health after 1.5x boost |

---

## Build and Run

Ensure Boost is installed and available.

```bash
g++ -std=c++17 functional/boost_health_boost_functor/main.cpp -o health_boost
./health_boost

Notes

This task focuses on functors and functional-style data processing in C++.

It is not a data structures and algorithms problem.

Keep the functor reusable and stateless aside from the stored factor.

Follow the starter code and TODO placement exactly.