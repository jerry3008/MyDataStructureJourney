# Curried Logger with Timestamp (C++)

This task extends a curried logging function by introducing a **timestamp** parameter.
The goal is to practice function currying in C++ using lambdas and `std::function`, while composing functions step by step.

---

## Objective

Modify an existing curried `logMessage` function so that it also accepts a timestamp and includes it in the log output.

The final function should be fully curried, accepting parameters one at a time and returning functions at each step.

---

## Requirements

- Use lambda expressions to implement currying
- Accept parameters in stages (one argument per function)
- Include a `timestamp` parameter of type `std::string`
- Print the timestamp as part of the log output
- Follow the TODO comments in the starter code

---

## Concept Overview

The curried function should conceptually behave like:

```text
logMessage(level)(timestamp)(message)
Each call returns another function until all required parameters are provided.

Example Usage

auto logger = logMessage("INFO");
auto loggerWithTime = logger("2025-10-01 14:30:00");

loggerWithTime("System started");
Expected Output
css
Copy code
[INFO] [2025-10-01 14:30:00] System started
Expected Behavior
Step	Input	Result
Level	"INFO"	Returns function expecting timestamp
Timestamp	"2025-10-01 14:30:00"	Returns function expecting message
Message	"System started"	Prints formatted log

Build and Run

g++ -std=c++17 functional/curried_logger_with_timestamp/main.cpp -o curried_logger
./curried_logger
Notes
This task focuses on functional programming concepts in C++.

It is not a data structures and algorithms problem.

Use std::function only where required by the starter code.

Keep the output format consistent with the specification.

