# Task Management System with Undo and Category Updates (C++)

This task builds a task management system in C++ that supports the full lifecycle of tasks, including creation, editing, deletion, prioritization, categorization, and undoing recent operations.

The starter setup already provides core task management methods and supporting structs. The goal is to extend the system with undo functionality and category updates while keeping the design organized and maintainable.

---

## Objective

Implement a task management system with support for:

- Creating tasks
- Editing tasks
- Removing tasks
- Setting task priority
- Categorizing tasks
- Retrieving tasks by priority
- Retrieving tasks by category
- Undoing the most recent task operation
- Changing the category of an existing task

---

## Existing Functionality

The starter system already includes:

- `add_task(task_id, description)`
- `edit_task(task_id, new_description)`
- `remove_task(task_id)`
- `set_task_priority(task_id, priority)`
- `categorize_task(task_id, category)`
- `get_tasks_by_priority(min_priority) const`
- `get_tasks_by_category(category) const`

It also provides the following helper structs:

- `Task`
- `Operation`
- `OperationDetail`

---

## New Features

### `undo_last_operation()`
Reverses the most recent task-related operation.

Possible operations to undo may include:
- task creation
- task edit
- task removal
- priority change
- category assignment
- category change

Returns:
- `true` if an operation was successfully undone
- `false` if there is no operation to undo

---

### `change_task_category(const std::string& task_id, const std::string& new_category)`
Updates the category of an existing task.

Returns:
- `true` if the task exists and the category was changed successfully
- `false` otherwise

---

## Design Focus

This task emphasizes:

- Encapsulation of task lifecycle operations
- State tracking for undo support
- Maintainable handling of categories and priorities
- Clean use of provided structs to manage task data and operation history

---

## Expected Outcome

After implementation, the system should:

- Support complete task lifecycle management
- Track operations so recent changes can be undone
- Allow category updates after task creation
- Retrieve tasks efficiently by priority and category
- Maintain a clear and extensible class-based structure

---

## Key Concepts

- OOP-based task management
- State history tracking
- Undo operation design
- Categorization and prioritization
- Encapsulation of task operations

---

## Build and Run

g++ -std=c++17 oop/task_management_undo_categories/main.cpp -o task_manager
./task_manager
Notes
This task belongs under OOP.
Focus on preserving correct task state across all operations.
The undo feature should reverse only the most recent action.
Use the provided structs effectively to organize operation history and task details.