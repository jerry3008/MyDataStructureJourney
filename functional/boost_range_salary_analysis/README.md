# Boost.Range Salary Analysis (C++)

This task focuses on using **Boost.Range** to process a collection of employee salaries using a functional-style pipeline.
You will filter, transform, and aggregate salary data using Boost.Range utilities.

---

## Objective

Given a list of employee salaries:

1. Filter salaries to include only those **greater than 60,000**
2. Apply a **7% increase** to the filtered salaries
3. Compute the **average** of the increased salaries

All operations must be implemented using **Boost.Range** functionality, following the TODO comments in the starter code.

---

## Requirements

- Use **Boost.Range adaptors** to:
  - Filter values above the threshold
  - Transform salaries by applying a percentage increase
- Use a standard aggregation approach to compute the average
- Do not modify the original salary list
- Complete only the missing sections marked by TODOs

---

## Example Scenario

### Input Salaries
[45000, 60000, 75000, 90000]

yaml
Copy code

### Processing Steps
- Filter salaries > 60000 → `[75000, 90000]`
- Apply 7% increase → `[80250, 96300]`
- Average increase result → `88275`

---

## Expected Behavior

| Step | Description |
|-----|-------------|
| Filter | Keep salaries strictly greater than 60,000 |
| Transform | Increase each selected salary by 7% |
| Aggregate | Compute the average of transformed salaries |

If no salaries exceed the threshold, the average should be handled safely (e.g., zero or guarded division).

---

## Build and Run

Ensure Boost is installed and accessible.

```bash
g++ -std=c++17 functional/boost_range_salary_analysis/main.cpp -o boost_range_salary
./boost_range_salary
Notes
This task belongs to functional programming with C++, not classic data structures and algorithms.

Boost.Range enables clean, readable pipelines similar to modern range-based libraries.

Use precise floating-point arithmetic when applying percentage increases.

Follow the provided starter code structure exactly.