# Task Manager with Urgent Priority (C++)

This task enhances a TaskManager system by introducing support for urgent tasks while preserving backward compatibility with the existing interface.

## Objective

Extend the existing `addTask` method to support an optional urgency flag without breaking existing functionality.

The updated method should allow:

- Adding tasks with a name and numerical priority
- Optionally marking a task as urgent
- Maintaining existing behavior when urgency is not specified


## Functional Requirements

### Existing Behavior
- Tasks are added with:
  - task name
  - priority (1 to 5)
- Tasks are ordered by priority
- If priorities are equal, insertion order is preserved

### New Behavior

- Add an optional parameter:
- If `urgent == true`:
- The task is placed at the beginning of the list
- Numerical priority is ignored

## Constraints

- Maximum number of tasks: 100
- Task name:
- Non-empty
- Maximum 50 characters
- Priority:
- Integer between 1 and 5

## Design Focus

- Backward compatibility (existing method calls must still work)
- Encapsulation of task properties
- Clean extension of functionality without breaking existing logic
- Priority handling with conditional override (urgent flag)


## Expected Outcome

After implementation, the system should:

- Support both standard and urgent tasks
- Maintain correct ordering based on priority and urgency
- Preserve insertion order for equal priorities
- Enforce task limit and input constraints


## Key Concepts

- Default parameters in C++
- Backward-compatible API design
- Priority-based data organization
- Conditional logic for overriding behavior
- Encapsulation using structs or classes

## Build and Run


g++ -std=c++17 oop/task_manager_urgent_priority/main.cpp -o task_manager
./task_manager
Notes
This task belongs under OOP.
Do not modify the main function.
Focus on extending functionality cleanly while preserving existing behavior.
Urgent tasks must always take precedence over all others.