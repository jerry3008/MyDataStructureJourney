# Monster Impact Refactor (C++)

This task focuses on refactoring code from a game scenario where monsters affect a player's journey.
The goal is to apply Object-Oriented Programming principles to improve structure, readability, and maintainability.

---

## Objective

Refactor the provided code that calculates the total impact on a player from encounters with different monsters.

The refactored solution should:

- Organize logic into appropriate classes
- Improve readability and clarity
- Reduce complexity in the original implementation
- Make the code easier to maintain and extend



## Design Focus

The refactor should emphasize core OOP principles such as:

- Encapsulation
- Clear class responsibilities
- Better organization of related data and behavior

Possible responsibilities may include:

- Representing a monster
- Representing the player
- Managing encounter or impact calculation logic



## Expected Outcome

After refactoring, the code should demonstrate:

- Cleaner class-based design
- Reduced reliance on one large block of logic
- Better separation of responsibilities
- Easier future updates, such as adding new monster types or new player effects



## Why This Matters

Game-related code often grows quickly in complexity as more entities and rules are introduced.

A well-structured object-oriented design helps:

- Keep logic understandable
- Support future features
- Avoid duplicated code
- Improve maintainability


## Build and Ru

g++ -std=c++17 oop/monster_impact_refactor/main.cpp -o monster_impact
./monster_impact