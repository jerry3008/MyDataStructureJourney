# Adventure Score Refactor (C++)

This task focuses on refactoring a block of code that calculates the adventure score for a player facing different challenges.
The goal is to improve readability and maintainability by applying Object-Oriented Programming principles.


## Objective

Refactor the provided starter code into a cleaner class-based design that:

- Organizes player-related functionality into appropriate classes
- Organizes challenge-related functionality into appropriate classes
- Separates the score calculation logic for individual challenges
- Improves code readability, structure, and maintainability



## Design Focus

The refactor should emphasize core OOP principles such as:

- Encapsulation
- Clear class responsibilities
- Separation of calculation logic from raw data handling

Possible responsibilities may include:

- Representing the player
- Representing a challenge
- Calculating the score contribution of each challenge
- Aggregating the total adventure score


## Expected Outcome

After refactoring, the code should demonstrate:

- Better organized class-based structure
- Clear separation between data and score calculation logic
- Improved readability for future updates
- Easier extension for adding new challenge types or scoring rules


## Why This Matters

As game or adventure logic becomes more complex, procedural code quickly becomes difficult to follow and maintain.

Applying OOP helps:

- Keep related logic together
- Reduce code duplication
- Improve clarity of responsibilities
- Make future changes safer and easier


## Build and Run

g++ -std=c++17 oop/adventure_score_refactor/main.cpp -o adventure_score
./adventure_score