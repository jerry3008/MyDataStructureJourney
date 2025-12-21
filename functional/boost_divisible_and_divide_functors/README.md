functional/boost_divisible_and_divide_functors/README.md:

# divisible_by and divide_by Functors with Boost (C++)

This task focuses on creating and using **two functors** to filter and transform a collection of integers.
You will combine functors with **Boost.Range** utilities to build a clean processing pipeline.

---

## Objective

1. Implement a functor `divisible_by`:
   - Filters numbers divisible by a given factor.
2. Implement a functor `divide_by`:
   - Transforms numbers by dividing them by the same factor.
3. Use these functors to:
   - Filter a vector of integers
   - Transform the filtered values
   - Print the final results using `boost::for_each`
4. Complete all sections marked with TODO comments in the starter code.

---

## Requirements

- Implement both functors as classes (not lambdas):
  - `divisible_by`
  - `divide_by`
- Divisibility condition:


value % factor == 0

- Transformation rule:


value / factor

- Use Boost utilities:
- `boost::filtered`
- `boost::transformed`
- `boost::for_each`
- Preserve the original order of values

---

## Example Scenario

### Input
Numbers:


[2, 4, 6, 8, 10, 12]


Factor:


2


### Processing Steps
- Filter divisible by 2 → `[2, 4, 6, 8, 10, 12]`
- Divide each by 2 → `[1, 2, 3, 4, 5, 6]`

### Output


1 2 3 4 5 6


---

## Expected Behavior

| Stage | Description |
|------|-------------|
| divisible_by | Selects values divisible by the factor |
| divide_by | Divides selected values by the factor |
| boost::for_each | Prints each transformed value |

---

## Build and Run

Ensure Boost is installed and available.

```bash
g++ -std=c++17 functional/boost_divisible_and_divide_functors/main.cpp -o boost_functors
./boost_functors

Notes

This task emphasizes functors and functional-style pipelines in C++.

It is not a data structures and algorithms problem.

Keep the functor implementations simple and reusable.

Follow the starter code structure and TODO placement exactly.