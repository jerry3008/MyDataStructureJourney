# Computer System with Composition

## Task
Design a C++ program to model a computer system using **composition**.

### Components
- **GPU**
  - `void render_graphics()`
  - Prints: `"GPU is rendering graphics"`.
- **RAM**
  - `void load_data()`
  - Prints: `"RAM is loading data"`.
- **Motherboard**
  - Contains a **GPU** and **RAM**.
  - `void process_tasks()`
    - Calls `render_graphics()` and `load_data()`.
- **ComputerSystem**
  - Contains a **Motherboard**.
  - `void run()`
    - Prints: `"Computer System is running"`.
    - Calls `process_tasks()` from **Motherboard**.

### Behavior
When `ComputerSystem::run()` is invoked, output should be:
Computer System is running
GPU is rendering graphics
RAM is loading data


## Constraints
- All class interactions are through composition.
- Keep class members private and methods public.

## Example Usage
```cpp
ComputerSystem system;
system.run();