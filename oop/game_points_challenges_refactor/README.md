# Game Points Challenges Refactor (C++)

This task focuses on refactoring a procedural system for calculating total points in a game into a more organized Object-Oriented Programming design.

The goal is to introduce classes for the player and different challenge types, such as Puzzle and Battle, to improve structure, readability, and maintainability.

## Objective

Refactor the provided code so that it:

- Uses classes to represent the player
- Uses classes to represent different challenge types
- Separates challenge-specific logic into focused components
- Calculates the total points in a cleaner and more maintainable way


## Design Focus

The refactor should emphasize core OOP principles:

- Encapsulation of data and behavior
- Clear separation of responsibilities
- Better structure than the original procedural implementation

Suggested class responsibilities may include:

- `Player` for player-related data
- `Puzzle` for puzzle-specific point logic
- `Battle` for battle-specific point logic
- A coordinating mechanism for total point calculation


## Expected Outcome

After refactoring, the code should demonstrate:

- A cleaner class-based design
- Separate handling for different challenge types
- Improved maintainability and readability
- Easier future extension for adding new types of challenges


## Why This Matters

When challenge logic grows, procedural code becomes harder to maintain and extend.

Using OOP helps:

- Keep logic grouped by responsibility
- Reduce duplication
- Make the code easier to understand
- Support future game feature expansion


## Build and Run


g++ -std=c++17 oop/game_points_challenges_refactor/main.cpp -o game_points
./game_points