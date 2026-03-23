This task focuses on refactoring a single, overly complex class into multiple smaller classes with clearly defined responsibilities.

The goal is to improve maintainability and modularity by separating user profile management, authentication logic, and settings management into distinct components.
## Objective

Refactor the provided code so that responsibilities are split into separate classes, such as:

- UserProfile
- Authentication
- Settings

The refactored design should demonstrate:

- Separation of Concerns
- Modular design
- Reduced coupling
- Improved maintainability


## Design Focus

### Separation of Concerns
Each class should handle one area of responsibility only.

Examples:
- User profile data should be managed independently
- Authentication logic should be isolated from profile logic
- User settings should be maintained in their own component

### Modular Design
Breaking a complex system into focused modules makes it easier to:

- Understand
- Test
- Extend
- Maintain


## Expected Refactoring Outcome

After refactoring, the code should show:

- Distinct classes with clear ownership of responsibilities
- Better organization of logic
- Less dependency between unrelated features
- Easier future modification without affecting the whole system


## Why This Matters

A class that handles profile data, login/authentication, and settings at the same time becomes harder to maintain and reuse.

Separating these concerns helps:

- Prevent tightly coupled code
- Improve readability
- Support future scaling of the system
- Encourage cleaner object-oriented design

## Build and Run

g++ -std=c++17 oop_and_patterns/separation_of_concerns_user_system/main.cpp -o soc_refactor
./soc_refactor