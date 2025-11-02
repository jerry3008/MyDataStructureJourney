# DataStream — Generic Filter, Project, and Aggregate (C++)

This project defines a **DataStream** class that performs functional-style data manipulation using generics.  
It demonstrates filtering, projecting, and aggregating data using lambda functions or functors.

## Objective

Implement the following **generic methods** inside the `DataStream` class:

### 1. `filter(predicate)`
- Accepts a predicate (function or lambda) that determines which elements to keep.
- Returns a **new DataStream** containing only elements that satisfy the condition.

### 2. `project(transform)`
- Accepts a transform function to map or extract specific fields.
- Returns a **new DataStream** containing transformed or reduced data.

### 3. `aggregate(aggregator)`
- Accepts an aggregation function that combines all elements (e.g., sum, average, etc.).
- Returns the **final aggregated value**.

---

## Use Case Example

After implementing the generic methods, use them to:

1. **Filter** data to include only employees in the `"Sales"` department.  
2. **Filter again** to retain only employees with salaries **greater than 70,000**.  
3. **Project** the data to keep only `"department"` and `"salary"` fields.  
4. **Aggregate** by computing the **average salary** within this filtered set.

---

## Expected Flow

```text
Original DataStream → filter(dept == "Sales") 
                     → filter(salary > 70000) 
                     → project({department, salary})
                     → aggregate(average salary)


Each stage returns either a new DataStream or a final numeric result.

Complexity

Filter: O(n)

Project: O(n)

Aggregate: O(n)

Build & Run

Implement DataStream in main.cpp.

Compile with a C++17+ compiler:

g++ -std=c++17 streams/datastream_generic_operations/main.cpp -o datastream
./datastream

Notes

Focus on reusability and clean separation of responsibilities.

Make use of templates and higher-order functions for generality.

Each operation should be non-destructive (return a new stream).