# Safety Records

Manage inspections by **factory** and **department** with chronological logs.

## API
- `bool addDepartment(factory_id, department_name)`  
  Adds a department to a factory; returns `false` if it already exists.

- `bool addInspection(factory_id, department_name, inspection)`  
  Appends an inspection string to the department; returns `false` if the factory/department does not exist.

- `std::optional<std::vector<std::string>> getInspections(factory_id, department_name)`  
  Returns all inspections in order or `std::nullopt` if not found.

## Notes
- Uses `unordered_map<string, unordered_map<string, vector<string>>>`.
- Chronological order is preserved via `push_back`.

## Build & Run
```bash
g++ -std=c++17 -O2 -Wall -Wextra main.cpp -o run
./run
