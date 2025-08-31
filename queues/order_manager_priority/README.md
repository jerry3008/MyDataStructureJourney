Order Manager with Priority Queue
Task

Implement a class OrderManager that manages a priority-based order system:

add_order(const std::string& customer, int priority)
Adds a new order with the given priority. Lower numbers mean higher priority.

process_order() → std::optional<std::pair<int, std::string>>
Processes and removes the order with the highest priority. Returns the {priority, customer} pair or std::nullopt if no orders remain.

Example
OrderManager om;
om.add_order("John", 2);  
om.add_order("Alice", 1);

auto o1 = om.process_order();  // {1, "Alice"}
auto o2 = om.process_order();  // {2, "John"}
auto o3 = om.process_order();  // std::nullopt