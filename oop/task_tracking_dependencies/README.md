# Task Tracking System with Dependencies (C++)

This task extends an existing task-tracking system by adding support for task dependencies.

The system already manages tasks with attributes such as title, description, status, and priority. The enhancement introduces dependency relationships between tasks, including dependency creation, removal, and lookup of dependent tasks.

---

## Objective

Extend the task management system with support for dependencies through the following methods:

- `add_dependency(task_id, dependency_task_id)`
- `remove_dependency(task_id, dependency_task_id)`
- `get_dependent_tasks(task_id)`

Dependencies define that one task cannot be considered ready until the tasks it depends on are completed.

---

## Existing Functionality

The system already supports:

- `add_task(task_id, title, description, status, priority)`
- `update_task(task_id, title, description, status, priority)`
- `remove_task(task_id)`
- `get_tasks_by_status(status)`
- `get_tasks_by_priority(priority)`

---

## New Features

### `add_dependency(const std::string &task_id, const std::string &dependency_task_id)`
Creates a dependency relationship where:

- `task_id` depends on `dependency_task_id`

Rules:
- Circular dependencies are not allowed
- Dependency should only be added if both tasks exist

---

### `remove_dependency(const std::string &task_id, const std::string &dependency_task_id)`
Removes the dependency relationship between two tasks.

---

### `get_dependent_tasks(const std::string &task_id)`
Returns a list of task IDs that depend on the given `task_id`.

---

## Dependency Behavior

- A task's status changes to `"Open"` when all tasks it depends on are marked `"Closed"`
- Dependency removal or task deletion does **not** automatically update dependent task statuses
- Status changes for dependent tasks must be handled manually after dependency changes

---

## Deletion Rules

When removing a task:

- Its attributes are removed
- Any dependency references involving that task are cleared
- Dependent task statuses are **not** automatically recalculated


## Design Focus

- Extending system behavior without breaking existing task management features
- Managing task relationships cleanly
- Preventing invalid dependency graphs (especially cycles)
- Keeping logic maintainable and easy to extend

## Expected Outcome

After implementation, the system should:

- Support dependency creation and removal
- Prevent circular dependencies
- Track which tasks depend on a given task
- Clear dependency references when tasks are deleted
- Preserve the original task-tracking functionality

## Key Concepts

- Dependency graph management
- Circular dependency prevention
- Backward-compatible system extension
- State tracking for tasks and relationships
- OOP-based organization of task entities and dependency logic

## Build and Run

g++ -std=c++17 oop/task_tracking_dependencies/main.cpp -o task_dependencies
./task_dependencies
Notes
This task belongs under OOP.
Focus on clean dependency handling and preserving existing behavior.
Circular dependencies must be explicitly prevented.
Dependent task statuses are not automatically updated after deletion or dependency removal.