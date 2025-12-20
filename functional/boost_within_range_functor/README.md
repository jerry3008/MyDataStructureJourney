# within_range Functor with Boost.Range (C++)

This task focuses on defining a reusable functor class and applying it with Boost.Range adaptors.
You will implement a functor named `within_range` that filters values within an inclusive numeric range `[min, max]`,
then use Boost.Range to filter and iterate through matching elements.

---

## Objective

1. Create a functor class `within_range` that stores:
   - `min` value
   - `max` value
2. The functor must return `true` when a value is within the inclusive range:
   - `min <= value <= max`
3. Use the functor with:
   - `boost::filtered` to filter a container
   - `boost::for_each` to iterate the filtered view
4. Complete the missing sections marked by TODOs in the starter code.

---

## Requirements

- Implement a functor class (not a lambda) named `within_range`
- Range check must be inclusive: `[min, max]`
- Use Boost.Range filtering (`boost::filtered`)
- Use Boost.Range iteration (`boost::for_each`)
- Follow the TODO comments in the starter code

---

## Example Scenario

### Input
Numbers:
[1, 3, 5, 7, 9, 10, 12]

makefile
Copy code

Range:
[min, max] = [5, 10]



### Output (values within range)
5 7 9 10


---

## Expected Behavior

| Component | Behavior |
|----------|----------|
| within_range(min, max) | Stores the range and evaluates membership |
| boost::filtered | Produces a filtered range view |
| boost::for_each | Applies an action to each filtered element |

---

## Build and Run

Ensure Boost is installed and accessible.

```bash
g++ -std=c++17 functional/boost_within_range_functor/main.cpp -o within_range
./within_range
Notes
This task is focused on C++ functors and Boost.Range usage.

It is not a data structures and algorithms problem.

Keep the implementation aligned with the starter code expectations and TODO locations.