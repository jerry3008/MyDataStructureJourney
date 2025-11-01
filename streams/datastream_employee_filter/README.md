# DataStream Employee Filter, Projection, and Aggregation (C++)

This project defines a simple **DataStream** class that operates on a collection of employees.  
Each employee record contains fields like `name`, `age`, and `salary`.

## Objective
Implement the missing methods in the `DataStream` class:

### 1. `filterEmployeesOverAge30()`
- Returns a **new DataStream** containing only employees whose `age > 30`.
- Should not modify the original data.

### 2. `projectEmployeeNamesAndSalaries()`
- Returns a **new DataStream** that includes **only** the `name` and `salary` fields of each employee.
- Ignores other fields such as `age`.

### 3. `aggregateAverageSalary()`
- Computes and returns the **average salary** of all employees in the stream.
- Returns a single numeric result (e.g., `double`).

## Expected Behavior
- Filtering should maintain original ordering.
- Projection should create a new stream with fewer fields.
- Aggregation should summarize all salaries into one average value.

## Complexity
- All methods operate in **O(n)** time, where *n* is the number of employees.

## Build & Run
1. Add your class and implementation in `main.cpp`.
2. Compile using a C++17 (or later) compiler:
   ```bash
   g++ -std=c++17 streams/datastream_employee_filter/main.cpp -o datastream
   ./datastream
